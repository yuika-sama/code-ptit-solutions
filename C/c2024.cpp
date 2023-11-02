#include<stdio.h>
#include<math.h>
#include<string.h>
#define scand(n) scanf("%d",&n)
#define scanld(n) scanf("%ld", &n)
#define printd(n) printf("%c", n+64) // tam thoi thay doi
#define printld(n) printf("%ld\n", n)
#define linedown printf("\n")
#define printc(n) printf("%c", n+96)
#define printC(n) printf("%c", n+64)
#define max(a,b) (((a)>(b))?(a):(b))
int main(){
	int m,n;
	scand(m); scand(n);
	if (m>n){
		for (int i=1; i<=m; i++){
			if (i<=n){
				for (int j=i; j<=n;j++) printd(j);
				for (int j=i-1; j>=1;j--) printd(j);
			}
			if (i>n){
				for (int j=n; j>=1; j--)
				printd(j);
			}
			printf("\n");
}
	} else {
		for (int i=1; i<=m; i++){
			for (int j=i; j<=n;j++) printd(j);
			for (int j=i-1; j>=1;j--) printd(j);
			printf("\n");
		}
	}
}
