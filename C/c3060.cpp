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
int divide2(int n){
	int d=0;
	while (n%2==0){
		n/=2;
		d++;
	}
	return d;
}
main(){
	int n,k;
	scand2(n,k);
	int d=0;
	for (int i=2; i<=n; i+=2){
		d+=divide2(i);
	}
	if (d>=k) printf("Yes\n"); else printf("No\n");
}
