#include<stdio.h>
#include<math.h>
#include<string.h>
#define scand(n) scanf("%d",&n)
#define scanld(n) scanf("%ld", &n)
#define printd(n) printf("%d", n)
#define printld(n) printf("%ld\n", n)
#define linedown printf("\n");
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
				printd(i);
				for (int j=n-1; j>=1; j--) printd(j);
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
