#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%2d " , n)
#define linedown printf("\n")
bool prime(int n){
	if (n<2) return false; else
	if (n==2) return true; else
	if (n>2 && n%2==0) return false; else
	for (int i=3; i<=sqrt(n); i+=2){
		if(n%i==0){
			return false;
			break;
		}
	}
	return true;
}
main(){
	int t;
	scan(t);
	for (int d=1; d<=t; d++){
		int n;
		scan(n);
		int a[20][20];
		int b[400];
		int max=1;
		b[0] = 2;
		for (int i=3;;i+=2){
			if (prime(i)){
				b[max++] = i;
			}
			if (max == n*n) break;
		}
		max = 0;
		int c1 = 0, c2 = n-1, h1 = 0, h2 = n-1;
		while (c1<=c2 && h1<=h2){
			for (int i=c1; i<=c2; i++){
				a[h1][i] = b[max++];
			}
			h1++;
			for (int i=h1; i<=h2; i++){
				a[i][c2] = b[max++];
			}
			c2--;
			if (c1<=c2){
				for (int i=c2; i>=c1; i--){
					a[h2][i] = b[max++];
				}
				h2--;
			}
			if (h1<=h2){
				for (int i = h2; i>=h1; i--){
					a[i][c1] = b[max++];
				}
				c1++;
			}
		}
		printf("Test %d:\n", d);
		for (int i=0; i<n; i++){
			for (int j=0; j<n; j++){
				print(a[i][j]);
			}
			linedown;
		}
	}
}
