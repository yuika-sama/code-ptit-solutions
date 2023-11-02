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
	int n;
	scan(n);
	int a[50][50];
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			scan(a[i][j]);
		}
	}
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			if (i==j){
				swap(&a[i][j], &a[i][n-i-1]);
			}
		}
	}
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			print(a[i][j]);
		}
		linedown;
	}
	
}
