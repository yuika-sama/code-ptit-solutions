#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
main(){
	int m,n; 
	scan(m); scan(n);
	int a[100][100];
	for (int i=0;i<m; i++){
		for(int j=0; j<n; j++){
			scan(a[i][j]);
		}
	}
	int x,y;
	scan(x); scan(y);
	for (int i=0; i<n; i++){
		swap(&a[x-1][i], &a[y-1][i]);
	}
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++){
			print(a[i][j]);
		}
		linedown;
	}

}
