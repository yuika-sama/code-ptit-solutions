#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scand(n) scanf("%lld",&n)
#define printd(n) printf("%lld " , n)
#define linedown printf("\n")
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))
bool isprime(long long n){
	bool check = true;
	if (n<2) check = false; else
	if (n==2) check = true; else
	if (n>2 && n%2==0) check = false; else
	for (long long i=3; i<=sqrt(n); i+=2){
		if (n%i==0){
			check = false;
			break;
		}
	}
	return check;
}
main(){
	int t;
	scanf("%d", &t);
	while (t--){
		long long n;
		scand(n);
		for (int i=1; i<=n/2; i++){
			if (n%i==0 && isprime(n/i)){
				printd(n/i);
				linedown;
				break;
			}
		}
	}
}
