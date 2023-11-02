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
int sosanh(const void *a, const void *b){
	if (*(int*)a > *(int*)b) return 1; else return -1;
}
main(){
	int m,n;
	scan(n); scan(m);
	int a[n], b[m];
	int d[1001]={0}, p[1001];
	int max = -1, min = 1001;
	bool check;
	for (int i=0; i<n; i++) {
		scan(a[i]);
	}
	qsort(a,n,sizeof(int),sosanh);
	for (int i=0; i<m; i++) {
		scan(b[i]);
	}
	qsort(b,m,sizeof(int),sosanh);
	//
	for (int i=0; i<n; i++){
		if (a[i] == a[i+1]) a[i] = -2;
	}
	for (int i=0; i<m; i++){
		if (b[i] == b[i+1]) b[i] = -2;
	}
	//
	for (int i=0; i<n; i++){
		check = false;
		if (a[i]!=-2){
			for (int j=0; j<m; j++){
				if (a[i] == b[j]){
					check = true;
					break;
				}
			}
			if (check) print(a[i]);
		}
	}
	linedown;
	//
	for (int i=0; i<n; i++){
		check = false;
		if (a[i]!=-2){
			for (int j=0; j<m; j++){
				if (a[i]==b[j]){
					check = true;
					break;
				}
			}
			if (!check) print(a[i]);
		}
	}
	linedown;
	for (int i=0; i<m; i++){
		check = false;
		if (b[i]!=-2){
			for (int j=0; j<n; j++){
				if (a[j]==b[i]){
					check = true;
					break;
				}
			}
			if (!check) print(b[i]);
		}
	}
	linedown;
	/*
	for (int i=0; i<n; i++) print(a[i]);
	linedown;
	for (int i=0; i<m; i++) print(b[i]);*/
}
