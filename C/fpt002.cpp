#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
main(){
	int m,n,p,q;
	scan(m); scan(n); scan(p); scan(q);
	int a[m][n], b[n][p], c[p][q];
	int d1[m][p] = {0}, d2[m][q] = {0};
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++){
			scan(a[i][j]);
		}
	}
	for (int i=0; i<n; i++){
		for (int j=0; j<p; j++){
			scan(b[i][j]);
		}
	}
	for (int i=0; i<p; i++){
		for (int j=0; j<q; j++){
			scan(c[i][j]);
		}
	}
	
	for (int i=0; i<m; i++){
		for (int j=0; j<p; j++){
			for (int k=0; k<n; k++){
				d1[i][j] += a[i][k]*b[k][j];
			}
		}
	}
	for (int i=0; i<m; i++){
		for (int j=0; j<q; j++){
			for (int k=0; k<p; k++){
				d2[i][j] += d1[i][k]*c[k][j];
			}
		}
	}
	
	for (int i=0; i<m; i++){
		for (int j=0; j<q; j++){
			print(d2[i][j]);
		}
		linedown;
	}
}
