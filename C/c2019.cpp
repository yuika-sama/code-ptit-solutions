#include <stdio.h>
main(){
	int n;
	scanf("%d", &n);
	int max = 2;
	for (int i=1; i<=n; i++){
		//for (int k=1; k<=n-i; k++) printf("~");
		for (int k=2; k<=max; k+=2){
			printf("%d", k);
		}
		for (int k=max-2; k>=2; k-=2){
			printf("%d", k);
		}
			max+=2;
		printf("\n");
	}
}
