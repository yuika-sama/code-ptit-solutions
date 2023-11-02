#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
main(){
	int t;
	scan(t);
	for (int k=0; k<t; k++){
		int m,n;
		scan(m); scan(n);
		int a[100][100];
		for (int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				scan(a[i][j]);
			}
		}
		for (int i1 = 0; i1<m; i1++){
			for (int j1=0; j1<n; j1++){
				for (int i2=i1; i2<m; i2++){
					for (int j2=j1; j2<n; j2++){
						if (a[i1][j1] > a[i2][j2]){
							swap(&a[i1][j1], &a[i2][j2]);
						}
					}
				}
			}
		}
		printf("Test %d:\n", k+1);
		for (int i=0; i<m; i++){
			for (int j=0; j<n; j++){
				print(a[i][j]);
			}
			linedown;
		}
		linedown;
	}
}
