#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
void sort(char a[][100], int n){
	for (int i=0; i<n-1; i++){
		for (int j=0; j<n-i-1; j++){
			if (a[j][0]>a[i][0]){
				char temp[100];
				strcpy(temp, a[i]);
				strcpy(a[i], a[j]);
				strcpy(a[j], temp);
			}
		}
	}
}
void remov(char a[][100], int n){
	for (int i=0; i<n-1; i++){
		for (int j=i+1; j<n; j++){
			if (strcmp(a[i], a[j]) == 0){
				strcpy(a[j], "1");
			}
		}
	}
}
int main(){
	int t;
	scan(t);
	while (t--){
		char s1[200], s2[200];
		scanf("\n");
		gets(s1);
		scanf("\n");
		gets(s2);
		
		char a[1000][100], b[1000][100];
		int p1=0, p2=0;
		char *token = strtok(s1, " ");
		while (token!=NULL){
			strcpy(a[p1++], token);
			token = strtok(NULL, " ");
		}
		token = strtok(s2, " ");
		while(token!=NULL){
			strcpy(b[p2++], token);
			token = strtok(NULL, " ");
		}
		
		sort(a, p1); sort(b, p2);
		remov(a, p1); remov(b, p2);
		for (int i=0; i<p1; i++){
		if (strcmp(a[i], "1")!=0){
			bool check = false;
			int j;
			for (j=0; j<p2; j++){
				if (strcmp(a[i], b[j])==0){
					check = true;
					break;
				}
			}
			if (!check) printf("%s ", a[i]);
		}
		}
		linedown;
	}
}
