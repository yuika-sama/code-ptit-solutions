#include<stdio.h>
#include<math.h>
#include<string.h>
#define scand(n) scanf("%d",&n)
#define scanld(n) scanf("%ld", &n)
#define printd(n) printf("%d", n)
#define printld(n) printf("%ld\n", n)
#define linedown printf("\n")
#define printc(n) printf("%c", n+96)
#define max(a,b) (((a)>(b))?(a):(b))
main(){
	int m,n;
	scand(m); scand(n);
	int a = max(m,n);
	for (int i=1; i<=m; i++){
		int a = max(m,n);
		for (int j = 1; j<=n ; j++){
			if (i>j){
				printc(a--);
			}
			else printc(a);
		}
		linedown;
	}
}
