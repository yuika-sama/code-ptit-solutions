#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scand(n) scanf("%d",&n)
#define printd(n) printf("%d " , n)
#define linedown printf("\n")
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))
main(){
	int m,n;
	scand(m); scand(n);
	int a[10][10];
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++){
			scand(a[i][j]);
		}
	}
	int b[n][m];
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++){
			b[j][i] = a[i][j];
		}
	}
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			printd(b[i][j]);
		}
		linedown;
	}
}
