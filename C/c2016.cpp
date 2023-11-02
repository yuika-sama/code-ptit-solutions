#include <stdio.h>
main(){
	int n;
	scanf("%d", &n);
	for (int i=1; i<=n; i++){
		if (i%2==0){
			for (int j=1; j<=i; j++) printf("%d", j*2);
		}
		else {
			int t=0;
			for (int j=1; j<=i; j++){
				printf("%d", j+t);
				t++;
			}
		}
		printf("\n");
	}
}
