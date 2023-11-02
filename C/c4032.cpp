#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scan(n) scanf("%ld",&n)
#define print(n) print("%d " , n)
#define linedown printf("\n")
bool notdec(long int n){
	bool check = true;
	int c=n%10;
	n/=10;
	while (n>0){
		if (c<n%10) {
			check = false;
			break;
		}
		c=n%10;
		n/=10;
	}
	return check;
}
main(){
	long int x;
	long int max=-1, min=1000000001;
	char kitu = ' ';
	int a[100000][2] = {0};
	while (kitu == ' '){
		scan(x);
		int i=0;
		if (notdec(x)){
			bool check = false;
			for (int j=0; j<i; j++){
				if (x==a[j][1]){
					a[j][2]++;
					check = true;
					break;
				}
			}
			if (check) {
				a[i++][1] = x;
				a[i][2]++;
			}
		}
		for (int j=0; j<i-1; j++){
			for (int k=j+1; k<i; j++){
				if (a[1][j]<=a[1][k]){
					int temp = a[1][j];
					a[1][j] = a[1][k];
					a[1][k] = temp;
					
					temp = a[2][j];
					a[2][j] = a[2][k];
					a[2][k] = temp;
				}
			}
		}
		for (int j=0; j<i; j++){
			printf("%d ", &a[j][1]);
		}
		linedown;for (int j=0; j<i; j++){
			printf("%d ", &a[j][2]);
		}
		linedown;
		kitu = getchar();
	}
}	
