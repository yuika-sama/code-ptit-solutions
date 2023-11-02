#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scand(n) scanf("%d",&n)
#define scand2(m,n) scanf("%d%d", &m, &n);
#define scanld(n) scanf("%ld", &n)
#define printd(n) printf("%d", n)
#define printld(n) printf("%ld\n", n)
#define linedown printf("\n")
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))
main(){
	int t,n;
	scand(t);
	int a[101];
	while (t--){
		scand(n);
		int max = -1;
		for (int i=1; i<=n; i++){
			scand(a[i]);
			if (a[i]>max) max = a[i];
		}
		printd(max); linedown;
		for (int i=1; i<=n; i++){
			if (a[i] == max) printf("%d ", i-1);
		}
		linedown;
	}
}
