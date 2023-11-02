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
void sieve(int n){
	bool isprime[n+1];
	memset(isprime, true, sizeof(isprime));
	isprime[0] = false;
	isprime[1] = false;
	for (int i=2; i<=sqrt(n); ++i){
		if (isprime[i]){
			for (int j=i*i; j<=n; j+=i){
				isprime[j] = false;
			}
		}
	}
	for (int i=2; i<=n; i++){
		if (isprime[i]) printd(i);
	}
}
main(){
	int n;
	scand(n);
	sieve(n);
}
