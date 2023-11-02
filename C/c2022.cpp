#include <stdio.h>
main(){
	int n;
	scanf("%d", &n);
	int a[100], pos = 1, max = n*(n+1)/2;
	for (int i=1; i<=n; i++){
		int j;
		if (i%2==0){
			for (int k=j+i; k>=j+1; k--){
				a[pos++] = k;
			}
			j = j+i;
		}
		if (i%2!=0){
			for (int k=j+1; k<=j+i; k++){
				a[pos++] = k;
			}
			j = j+i;
		}
	}
	int k = 1, x=1;;
	for (int i=1; i<=n; i++){
		for (int j = 1; j<=k; j++){
			printf("%d ", a[x++]);
		}
		k++;
		printf("\n");
	}
}
