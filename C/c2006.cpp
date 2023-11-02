#include<stdio.h>
#include<math.h>
#include<string.h>
#define scand(n) scanf("%d",&n)
#define scanld(n) scanf("%ld", &n)
#define printd(n) printf("%d\n", n)
#define printld(n) printf("%ld\n", n)
int main(){
	int m,n;
	scanf("%d%d", &m, &n);
	for (int i=1; i<=m; i++){
		for (int j=0; j<i-1;j++){
			printf("~");
		}
		for (int j=1; j<=n;j++){
			if (j==1 || j==n || i==1 || i ==m)
			printf("*");
			else printf(".");
		}
		printf("\n");
	}
}
