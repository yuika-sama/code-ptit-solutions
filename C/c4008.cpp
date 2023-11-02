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
	int t;
	scand(t);
	int n,m,p;
	int a[100], b[100];
	int c[200]; memset(c, 0, sizeof(c));
	int temp=t;
	while (t--){
		scand2(n,m); scand(p);
		for (int i=0; i<n; i++) scand(a[i]);
		for (int i=0; i<m; i++) scand(b[i]);
		
		for (int i=0; i<p; i++) c[i] = a[i];
		int k=0;
		for (int i=p; i<m+p; i++) c[i] = b[k++];
		k = p;
		for (int i=m+p; i<m+p+n; i++) c[i] = a[k++];
		printf("Test %d:\n", temp-t);
		for (int i=0; i<m+n; i++) printd(c[i]);
		linedown;
	}
}
