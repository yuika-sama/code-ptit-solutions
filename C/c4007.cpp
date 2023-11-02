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
	int n,m;
	int a[100], b[100];
	scand2(n,m);
	for (int i=0; i<n; i++){
		scand(a[i]);
	}
	for (int i=0; i<m; i++){
		scand(b[i]);
	}
	
	int k;
	scand(k);
	
	int c[200]; memset(c, 0, sizeof(c));
	for (int i=0; i<k; i++){
		c[i] = a[i];
	}
	int t=0;
	for (int i=k; i<m+k; i++){
		c[i] = b[t++];
	}
	t = k;
	for (int i=m+k; i<m+k+n; i++){
		c[i] = a[t++];
	}
	for (int i=0; i<m+n; i++) printd(c[i]);
}
