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
	int n;
	scand(n);
	unsigned long long l, r;
	while (n--){
		scanf("%llu%llu", &l, &r);
		int d=(int)(floor(sqrt(r)) - ceil(sqrt(l)) +1);
		for (int i=(int)sqrt(l); i<=(int)sqrt(r); i++){
			if (!isprime(i)){
				d--;
			}
		}
		printd(d);
		linedown;
	}
}
