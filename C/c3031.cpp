#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scand(n) scanf("%d",&n)
#define scanld2(m,n) scanf("%ld%ld", &m, &n);
#define scanld(n) scanf("%ld", &n)
#define printd(n) printf("%d ", n)
#define printld(n) printf("%ld ", n)
#define linedown printf("\n")
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))
long int gcd(long int a, long int b){
	while  (a!=b){
		if (a>b) a-=b;
		if (a<b) b-=a;
	}
	return a;
}
main(){
	int t;
	scand(t);
	long int a,b,c,d;
	while (t--){
		scanld2(a,b); scanld2(c,d);
		if (gcd(a,b) == gcd(c,d)) printf("YES"); else printf("NO");
		linedown;
	}
}
