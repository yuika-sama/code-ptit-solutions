#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scand(n) scanf("%d",&n)
#define scand2(m,n) scanf("%d%d", &m, &n);
#define scanld(n) scanf("%ld", &n)
#define printd(n) printf("%d " , n)
#define printld(n) printf("%ld\n", n)
#define linedown printf("\n")
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))
main(){
	int n;
	scand(n);
	int c[100], l[100];
	int cc=0, cl=0;
	int x;
	while (n--){
		scand(x);
		if (x%2==0) c[cc++] = x; else l[cl++] = x;
	}
	for (int i=0; i<cc; i++) printd(c[i]); linedown;
	for (int i=0; i<cl; i++) printd(l[i]);
}
