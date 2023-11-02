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
main(){
	int t;
	scand(t);
	int temp = t;
	long int n;
	
	bool sieve[10000];
	memset(sieve, true, sizeof(sieve));
	sieve[0] = false;
	sieve[1] = false;
	for (int i=2; i<=sqrt(10000); i++){
		if (sieve[i]){
			for (int j=i*i; j<=n; j+=i){
				sieve[j] = false;
			}		
		}
	}
	int a[10000];
	memset(a, 0, sizeof(a));
	while (t--){
		scand(n);
		int i=2;
		int max = 0;
		while (n>0){
			while (n%i==0){
				n/=i;
				a[i]++;
			}
			if (i==2) i++; else i+=2;
			max = i;
		}
		printf("Test %d: ", temp-t);
		for (i=2; i<=max; i++){
			if (a[i]!=0) printf("%d(%d) ", i, a[i]);
		}
	}
}
