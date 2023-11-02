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
	int t;
	scand(t);
	while (t--){
		int n,m,x;
		scand(n); scand(m); scand(x);
		int a[100][100];
		for (int i=0; i<n; i++){
			for (int j=0; j<m; j++){
				scand(a[i][j]);
			}
		}
		
		for (int i=0; i<m; i++){
			for (int j=0; j<n-1; j++){
				for (int k=j+1; k<n; k++){
					if (a[k][i]<a[j][i]){
						int t=a[k][i];
						a[k][i] = a[j][i];
						a[j][i] = t;
					}
				}
			}
		}
		for (int i=0; i<n; i++){
			for (int j=0; j<m; j++){
				printd(a[i][j]);
			}
			linedown;
		}
	}
}
