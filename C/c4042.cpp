#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int n;
		scanf("%d", &n);
		long int a[100000];
		for (int i=0; i<n; i++){
			scanf("%ld", &a[i]);
		}
		bool check = false;
		for (int i=0; i<n-1; i++){
			for (int j=i+1; j<n; j++){
				if (a[i]==a[j]){
					check = true;
					printf("%ld\n",a[i]);
					break;
				}
			}
			if (check) break;
		}
		if (!check) printf("NO\n");
	}
}
