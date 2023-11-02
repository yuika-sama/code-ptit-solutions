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
	int max1=9999999, max2=9999998;
	int n;
	scand(n);
	int a[100];
	for (int i=0; i<n; i++){
		scand(a[i]);
		if (a[i]<max1) max1=a[i];
	}
	for (int i=0; i<n; i++){
		if (a[i]<max2 && a[i]!=max1) max2=a[i];
	}
	printd(max1); printd(max2);
}
