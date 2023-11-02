#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
bool rotatable(char s[55][55], int n){
	bool check = true;
	int a[300] = {0};
	int min = 300, max = -1;
	for (int i=0; i<n; i++){
		for (int j=0; j<strlen(s[i]); j++){
			a[s[i][j]]++;
			min = fmin(min, s[i][j]);
			max = fmax(max, s[i][j]);
		}
	}
	for (int i=min; i<=max; i++){
		if (a[i]!=0){
			if (a[i]%n!=0){
				check = false;
				break;
			}
		}
	}
	return check;
}
void rotate(char s[]){
	char temp[55];
	int k = 0;
	for (int i=1; i<strlen(s); i++){
		temp[k++] = s[i];
	}
	temp[k] = s[0];
	strcpy(s, temp);
}
int roll(char s[55][55], int k, int n, int len){
	int step = 0;
	while (step<len){
		int tracking = 0;
		for (int j=0; j<n; j++){
			if (j!=k){
				if (strcmp(s[j], s[k])==0) tracking++;
			}
		}
		if (tracking == n-1) break;
		step++;
		for (int i=0; i<n; i++){
			if (i!=k){
				rotate(s[i]);
			}
		}
	}
	return step;
}
void reset(char a[55][55], char b[55][55], int n){
	for (int i=0; i<n; i++){
		strcpy(b[i], a[i]);
	}
}
main(){
	int n;
	scan(n);
	getchar();
	char s[55][55], b[55][55];
	for (int i=0; i<n; i++){
		gets(s[i]);
		strcpy(b[i], s[i]);
	}
	int len = strlen(s[0]);
	if (rotatable(s,n) == true){
		int a[55] = {0};
		for (int i=0; i<n; i++){
			a[i] = roll(b, i, n, len);
			reset(s, b, n);
		}
		int min = a[0];
		for (int i=0; i<n; i++){
			if (a[i]<min) min = a[i];
		}
		print(min);
	} else print(-1);
}
