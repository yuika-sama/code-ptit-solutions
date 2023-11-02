#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scand(n) scanf("%d",&n)
#define scand2(m,n) scanf("%d%d", &m, &n);
#define scanld(n) scanf("%ld", &n)
#define printd(n) printf("%d ", n)
#define printld(n) printf("%ld\n", n)
#define linedown printf("\n")
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))
main(){
	long int n;
	scanld(n);
	long int a=0, b=1,c, i=0, ans=0;
	while (i<n){
		if (c==n) {ans = 1; break;}
		c=a+b;
		a=b;
		b=c;
		i++;
	}
	printd(ans);
}
