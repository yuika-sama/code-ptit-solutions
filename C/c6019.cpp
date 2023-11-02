#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
main(){
		char s[50];
		gets(s);
		char a[20][50];
		int n=0;
		char *token = strtok(s, " ");
		while (token != NULL){
			strcpy(a[n++], token);
			token = strtok(NULL, " ");
		}
		char mail[50];
		int len = 0;
		for (int i=0; i<n-1; i++){
			if (a[i][0]>='A' && a[i][0]<='Z') a[i][0]+=32;
		}
		for (int i=0; i<n-1; i++){
			mail[len++] = a[i][0];
		}
		for (int i=0; i<strlen(a[n-1]); i++){
			if (a[n-1][i]>='A' && a[n-1][i]<='Z'){
				a[n-1][i] += 32;
			}
		}
		for (int i=0; i<strlen(a[n-1]); i++){
			mail[len++] = a[n-1][i];
		}
		printf("%s@ptit.edu.vn", mail);
}
