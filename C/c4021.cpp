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
	int a[100];
	for (int i=0; i<n; i++) scand(a[i]);
	int k;
	scand(k);
	
	for (int i=n-k; i<n; i++) printd(a[i]);
	for (int i=0; i<n-k; i++) printd(a[i]);
}
