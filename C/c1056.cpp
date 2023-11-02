#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scand(n) scanf("%d",&n)
#define scanld(n) scanf("%ld", &n)
#define scanlld(n) scanf("%lld", &n)
#define printd(n) printf("%d\n", n)
#define printld(n) printf("%ld\n", n)

int main(){
	int t,a;
	scand(t);
	bool r;
	long long int n;
	while (t--){
		scanlld(n);
		r = true;
		while (n>0){
			a = n%10;
			n/=10;
			if (a<n%10){
				r = false;
				break;
			}
		}
		if (r) printf("YES\n"); else printf("NO\n");
	}
}
