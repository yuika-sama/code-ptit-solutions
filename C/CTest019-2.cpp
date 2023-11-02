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
	while (t--){
		int n,m,k;
		scan(n); scan(m); scan(k);
		int a[100][100];
		for (int i=0; i<n; i++){
			for (int j=0; j<m; j++){
				scan(a[i][j]);
			}
		}
		for (int i=0; i<n-1; i++){
			for (int j=i+1; j<n; j++){
				if (a[j][k-1]<a[i][k-1]){
					int temp = a[j][k-1];
					a[j][k-1] = a[i][k-1];
					a[i][k-1] = temp;
				}
			}
		}
		for (int i=0; i<n; i++){
			for (int j=0; j<m; j++){
				print(a[i][j]);
			}
			linedown;
		}
		linedown;
	}
}
