#include<stdio.h>
#include<math.h>
#include<string.h>
#define scand(n) scanf("%d",&n)
#define scanld(n) scanf("%ld", &n)
#define printd(n) printf("%d", n)
#define printld(n) printf("%ld\n", n)
int main(){
	int m, n;
	scanf("%d%d", &m, &n);
	int a[m][n];
	memset(a, 0, sizeof(a));
	
	for (int i=1; i<=m; i++){
		for (int j = 1; j<=n-i+1; j++){
			a[i][j] = j+i-1;
		}
		for (int j=n; j>n-i+1; j--){
			a[i][j] = n-j+1;
		}
	}
	
	for (int i=1; i<=m;i++){
		for (int j=1; j<=n; j++){
			printd(a[i][j]);
		}
		printf("\n");
	}
}
