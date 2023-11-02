#include <stdio.h>
main(){
	int n;
	scanf("%d", &n);
	int max = 1;
	for (int i=0; i<n; i++){
		for (int j=1; j<=max; j++){
			printf("%d", j);
		}
		printf("\n");
		max+=2;
	}
}
