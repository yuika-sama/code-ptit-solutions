#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scand(n) scanf("%d",&n)
#define scanld(n) scanf("%ld", &n)
#define scanlld(n) scanf("%lld", &n)
#define printd(n) printf("%d\n", n)
#define printld(n) printf("%ld\n", n)
int main(){
	int n;
	scand(n);
	for (int i=0; i<n; i++){
		for (int j=0; j<n;j++){
			printf("*");
		}
		printf("\n");	}
}
