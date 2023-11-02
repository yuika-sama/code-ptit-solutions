#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
void swap(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
main(){
	int n;
	scan(n);
	int a[n];
	int count = 0;
	for (int i=0; i<n; i++) scan(a[i]);
	bool check = false;
	
	for (int d=1; d<n-1; d++){
		check = false;
		for (int i=0; i<n-1-d; i++){
			if (a[i]>a[i+1]) {
				swap(&a[i], &a[i+1]);
				check = true;
			}
		}
		if (check=true){
			count++;
		}
		if (check=true){
			printf("Buoc %d: ", count);
			for (int i=0; i<n; i++) print(a[i]);
			linedown;
		}
	}
	
}
