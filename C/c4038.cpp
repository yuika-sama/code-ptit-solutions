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
void selection(int a[], int n){
	int min;
	for (int i=0; i<n-1; i++){
		min = i;
		for (int j=i+1; j<n; j++){
			if (a[j] < a[min]){
				min = j;
			}
		}
		swap(&a[min], &a[i]);
		for (int j=0; j<n; j++){
			print(a[j]);
		}
		linedown;
	}
}
main(){
	int n;
	scan(n);
	int a[100];
	for (int i=0; i<n; i++){
		scan(a[i]);
	}
	selection(a, n);
	
}
