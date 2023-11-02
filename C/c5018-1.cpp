#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
main(){
	int t;
	scan(t);
	for (int d=1; d<=t; d++){
		int n;
		scan(n);
		int a[20][20];
		int b[400];
		for (int i=0; i<=n*n; i++) b[i] = i;
		int c1=0, c2=n-1, h1=0, h2=n-1, pos = n*n;
		while (h1<=h2 && c1<=c2){
			for (int i=c1; i<=c2; i++){
				a[h1][i] = b[pos--];
			}
			h1++;
			for (int i=h1; i<=h2; i++){
				a[i][c2] = b[pos--];
			}
			c2--;
			if (c1<=c2){
				for (int i=c2; i>=c1; i--){
					a[h2][i] = b[pos--];
				}
				h2--;
			}
			if (h1<=h2){
				for (int i=h2; i>=h1; i--){
					a[i][c1] = b[pos--];
				}
				c1++;
			}
		}
		printf("Test %d:\n", d);
		for (int i=0; i<n; i++){
			for (int j=0; j<n; j++){
				print(a[i][j]);
			}
			linedown;
		}
	}
}
