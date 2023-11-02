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
	long int n;
	scanld(n);
	
	printd(2);
	int t=0; //count
	int i=3;
	while (t<n-1){
		if(isprime(i)){
			printld(i);
			t++;
		}
		i+=2;
	}
}
