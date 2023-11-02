#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scand(n) scanf("%d",&n)
#define scand2(m,n) scanf("%d%d", &m, &n);
#define scanld(n) scanf("%ld", &n)
#define printd(n) printf("%d\n", n)
#define printld(n) printf("%ld\n", n)
#define linedown printf("\n")
bool isprime(long int n){
	if (n<2 || (n!=2 && n%2==0)) return false; else
	if (n==2) return false; else
	{
		bool res = true;
		for (long int i=3; i<=sqrt(n); i+=2){
			if (n%i==0) {
				res = false;
				break;
			}
		}
		return res;
	}
}
main(){
	int t;
	scand(t);
	int temp = t;
	long int n;
	while (t--){
		scand(n);
		int a[n];
		memset(a, 0, sizeof(a));
		printf("Test %d: ", temp - t);
		int j=2, max = 2;
		while (n>0){
			while (n%j==0 && isprime(j)){
				n/=j;
				a[j]++;
			}
			max = j++;
		}
		for (int j=2; j<=max; j++){
			if (a[j]) printf("%d(%d) ", j, a[j]);
		}
	}
	
}
