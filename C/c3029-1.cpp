#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scand(n) scanf("%lld",&n)
#define scand2(m,n) scanf("%d%d", &m, &n);
#define scanld(n) scanf("%ld", &n)
#define printd(n) printf("%d ", n)
#define printld(n) printf("%ld\n", n)
#define linedown printf("\n")
bool odd(long long n){
	bool a = true;
	while (n>0){
		if (n%2!=0){
			a = false;
			break;
		}
		n/=10;
	}
	return a;
}
main(){
	int t;
	scand(t);
	long long n;
	while (t--){
		scand(n);
		if (odd(n)) printf("YES"); else printf("NO");
		linedown;
	}
}
