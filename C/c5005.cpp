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
	int temp = t;
	while (t--){
		int m,n;
		scand(m); scand(n);
		int a[m][n];
		for (int i=0; i<m; i++){
			for (int j=0; j<n; j++){
				scand(a[i][j]);
			}
		}
		
		printf("Test %d:\n", temp - t);
		for (int i=1; i<m; i++){
			for (int j=1; j<n; j++){
				printd(a[i][j]);
			}
			linedown;
		}
		//linedown;
	}
}
