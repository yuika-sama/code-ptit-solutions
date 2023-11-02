#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
#define scan(n) scanf("%lld",&n)
#define print(n) printf("%lld " , n)
#define linedown printf("\n")
bool prime(long long n){
	if (n<2) return false; else
	if (n==2) return true; else
	if (n>2 && n%2==0) return false; else
	{
		for (int i=3; i<=sqrt(n); i+=2){
			if (n%i==0){
				return false;
				break;
			}
		}
	}
	return true;
}
main(){
	int t;
	scan(t);
	while (t--){
		long long n;
		scan(n);
		for (int i=1; i<n/2; i++){
			if (n%i==0 && prime(n/i) && n%(n/i) == 0){
				print(n/i);
				break;
			}
		}
		linedown;
}
}
