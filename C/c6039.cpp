#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
void swap(char a[]){
	char temp = a[0];
	for (int i=0; i<strlen(a)-1; i++) a[i] = a[i+1];
	a[strlen(a) - 1] = temp;
}
void reset(char a[50][50], char b[50][50], int n){
	for (int i=0; i<n; i++){
		strcpy(b[i], a[i]);
	}
}
int rotate(char b[50][50], int n, int k, int len){
	int step = 0;
	//bool rotated = false;
	while (step<len){
		for (int i=0; i<n; i++){
			if(i!=k){
				for (int j=0; j<n; j++){
					if (j!=k){
						if (strcmp(b[j], b[k]) !=0) break;
					} else continue; 
				}
				swap(b[i]);
				step++;
			} else continue;
		}
	}
	return step;
}
main(){
	int n;
	scan(n);
	getchar();
	char a[50][50], b[50][50];
	int len;
	for (int i=0; i<n; i++){
		gets(a[i]);
		len = strlen(a[i]);
		strcpy(b[i], a[i]);
	}
	int step, min = 55;
	for (int i=0; i<n; i++){
		step = rotate(b,n,i,len);
		min = fmin(step, min);
		reset(a,b,n);
	}
	print(min);
}
