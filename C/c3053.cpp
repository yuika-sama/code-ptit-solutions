#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scand(n) scanf("%d",&n)
#define scand2(m,n) scanf("%d%d", &m, &n);
#define scanld(n) scanf("%ld", &n)
#define printd(n) printf("%d ", n)
#define printld(n) printf("%ld  ", n)
#define linedown printf("\n")
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))
bool isprime(int n){
	bool res = true;
	if (n<2) res = false;
	else if (n==2) res = true;
	else if (n!=2 && n%2==0) res = false;
	else {
		for (int i=3; i<=sqrt(n); i+=2){
			if(n%i==0){
				res = false;
				break;
			}
		}
	}
	return res;
}
main(){
	int t;
	scand(t);
	int n;
	while (t--){
		scand(n);
		if (isprime(n-2)){
			printd(2);
			printd(n-2);
		}
		for (int i=3; i<=n/2; i+=2){
			if (isprime(n-i) && isprime(i)){
				printd(i);
				printd(n-i);
			}
		}
		linedown;
	}
}
