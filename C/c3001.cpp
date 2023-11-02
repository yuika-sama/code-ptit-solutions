#include<stdio.h>
#include<math.h>
#include<string.h>
#define scand(n) scanf("%d",&n)
#define scand2(m,n) scanf("%d%d", &m, &n);
#define scanld(n) scanf("%ld", &n)
#define printd(n) printf("%d", n)
#define printld(n) printf("%ld\n", n)
#define linedown printf("\n")
#define printc(n) printf("%c", n+96)
#define printC(n) printf("%c", n+64)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
void solve(long int n){
	int sum = 0;
	while (n>0){
		sum += n%10;
		n/=10;
	}
	if (sum%10==0) printf("YES\n"); else printf("NO\n");
}
main(){
	int t;
	scand(t);
	long int n;
	while (t--){
		scanld(n);
		solve(n);
	}
}
