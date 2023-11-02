#include<stdio.h>
#include<math.h>
#include<string.h>
#define scand(n) scanf("%d",&n)
#define scanld(n) scanf("%ld", &n)
#define printd(n) printf("%d\n", n)
#define printld(n) printf("%ld\n", n)
int main(){
	int n;
	scand(n);
	for (int i=1; i<=n; i++){
		for (int j=1; j<n-i+1;j++){
			printf("~");
		}
		for (int j=1;j<=n;j++){
			if(j==1 || j == n || i == 1 || i==n){
				printf("*");
			}else printf(".");
		}
		printf("\n");
	}
}
