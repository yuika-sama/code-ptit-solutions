#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
int main(){
	int t;
	scan(t);
	for (int d=0; d<t; d++){
		int m,n;
		scan(m); scan(n);
		int a[m][n];
		for (int i=0; i<m;i++){
			for (int j=0; j<n; j++){
				scan(a[i][j]);
			}
		}
		//
		int sum = 0, mxsum = -1, index_row, index_column;
		for (int i=0; i<m;i++){
			sum = 0;
			for (int j=0; j<n; j++){
				sum+=a[i][j];
			}
			if (sum>mxsum){
				mxsum = sum;
				index_row = i;
			}
		}
		//
		sum = 0; mxsum = -1;
		for (int i=0; i<n; i++){
			sum = 0;
			for (int j=0; j<m; j++){
				if (j!=index_row){
					sum+=a[j][i];
				}
			}
			if (sum>mxsum){
				mxsum = sum;
				index_column = i;
			}
		}
		//print(index_column);
		//print(index_row);
		//
		printf("Test %d:\n", d+1);
		for (int i=0; i<m; i++){
			if (i!=index_row){
				for(int j=0; j<n; j++){
					if(j!=index_column){
						print(a[i][j]);
					}
				}
				linedown;
			}
		}
	}
}

