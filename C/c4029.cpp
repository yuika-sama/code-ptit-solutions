#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))
main(){
	int n;
	scan(n);
	int a[n];
	for (int i=0; i<n; i++) scan(a[i]);
	//int d=1;
	int x=10;
	for (int k=1;x!=-1;){
		for (int i=0; i<n-1; i++){
			for (int j=i+1; j<n; j++){
				if (a[i]>a[j]){
					int temp = a[i];
					a[i] = a[j];
					a[j] = temp;
					k++;
				}
				bool check = true;
				for (int i=0; i<n-1; i++){
					if (a[i]>a[i+1]){
						check = false; break;
					}
				}
				printf("Buoc %d: ", k); 
				for (int i=0; i<n; i++) print(a[i]);
				linedown;
				if (check) x=-1;
			}
		}
	}
}
