#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%2d " , n)
#define linedown printf("\n")
main(){
	int n;
	scan(n);
	int a[9][9];
	int b[81];
	b[0] = 0; b[1] = 1;
	int max = 2;
	while (max<=n*n){
		b[max] = b[max-1] + b[max-2];
		max+=1;
	}
	max = 0;
	int c1=0, c2=n-1, h1=0, h2=n-1;
	while (c1<=c2 && h1<=h2){
		for (int i=c1; i<=c2; i++){
			a[h1][i] = b[max++];
		}
		h1++;
		for (int i=h1; i<=h2; i++){
			a[i][c2] = b[max++];
		}
		c2--;
		if (c1<=c2){
			for (int i=c2; i>=c1; i--){
				a[h2][i] = b[max++];
			}
			h2--;
		}
		if (h1<=h2){
			for (int i=h2; i>=h1; i--){
				a[i][c1] = b[max++];
			}
			c1++;
		}
	}
	//for (int i=0; i<n*n; i++) print(b[i]);
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			print(a[i][j]);
		}
		linedown;
	}
}
