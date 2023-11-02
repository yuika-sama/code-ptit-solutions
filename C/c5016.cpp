#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
main(){
	int n;
	scan(n);
	int a[100][100] = {0};
	int c1=0, c2=n-1, h1=0, h2=n-1, gt=1;
	while (h1<=h2 && c1<=c2){
		for (int i=c1; i<=c2; i++){
			a[h1][i] = gt++;
		}
		h1++;
		for (int i=h1; i<=h2; i++){
			a[i][c2] = gt++;
		}
		c2--;
		if (c1<=c2){
			for (int i=c2; i>=c1; i--){
				a[h2][i] = gt++;
			}
			h2--;	
		}
		if (h1<=h2){
			for (int i=h2; i>=h1; i--){
				a[i][c1] = gt++;
			}
			c1++;
		}
	}
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			print(a[i][j]);
		}
		linedown;
	}
}

