#include <stdio.h>
main(){
	int n;
	scanf("%d", &n);
	int max = 1;
	for (int i=1; i<=n; i++){
		int temp = i, count = n;
		for (int j=1; j<=max; j++){
			printf("%c ", temp + 'A' - 1);
			count--;
			temp = temp + count;
		}
		max++;
		printf("\n");
	}
}

