#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
main(){
	int t;
	scan(t);
	while (t--){
		int n,m,x;
		scan(n); scan(m); scan(x);
		x--;
		int a[100][100];
		for (int i=0; i<m; i++){
			for (int j=0; j<n; j++){
				scan(a[i][j]);
			}
		}
		for (int i=0; i<m; i++){
			for (int j=0; j<n; j++){
				if (a[j][x]>a[i][x]){
					int temp = a[i][x];
					a[i][x] = a[j][x];
					a[j][x] = temp;
				}
			}
		}
		for (int i=0; i<m; i++){
			for (int j=0; j<n; j++){
				print(a[i][j]);
			}
			linedown;
		}
	}
}
