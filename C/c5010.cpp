#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
bool prime(int n){
	bool check = true;
	if (n<2) check = false; else
	if (n==2) check = true; else;
	if(n>2 && n%2==0) check = false; else
	for (int i=3; i<=sqrt(n); i+=2){
		if (n%i==0){
			check = false;
			break;
		}
	}
	return check;
}
main() {
	int n;
	scan(n);
	int a[50][50];
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			scan(a[i][j]);
		}
	}
	int sum = 0;
	for (int i=0; i<n; i++){
		for (int j=i; j<n; j++){
			if (prime(a[i][j])){
				sum += a[i][j];
			}
		}
	}
	print(sum);
}
