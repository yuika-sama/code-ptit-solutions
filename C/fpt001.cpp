#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
int main(){
	int n;
	scan(n);
	int a[100][100] = {0};
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			a[i][j]= j-i;
			if (j-i<0) a[i][j] = 0;
		}
	}
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			print(a[i][j]);
		}
		linedown;
	}
}

