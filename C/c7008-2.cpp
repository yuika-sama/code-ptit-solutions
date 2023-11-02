#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
main(){
	int t;
	scan(t);
	getchar();
	scanf("\n");
	while (t--){
		char s1[10000], s2[10000];
		int bac[10000] = {0};
		int max = -1;
		char a[10000][20];
		gets(s1);
		scanf("\n");
		gets(s2);
		int n=0;
		char *token = strtok(s1, " ");
		while (token!=NULL){
			if (strcmp(token, "+")){
				strcpy(a[n++], token);
			}
			token = strtok(NULL, " ");
		}
		char *tok = strtok(s2, " ");
		while (tok!=NULL){
			if (strcmp(tok, "+")){
				strcpy(a[n++], tok);
			}
			tok = strtok(NULL, " ");
		}
		for (int i=0; i<n; i++){
			int hs, lv;
			sscanf(a[i],"%d*x^%d", hs, lv);
			bac[lv] += hs;
			printf("%d %d\n", hs, lv);
			max = fmax(max, lv);
		}/*
		bool check = false;
		for (int i=0; i<max; i++){
			if (bac[i]!=0){
				if (!check){
					printf("%d*x^%d", bac[i], i);
					check = true;
				} else {
					printf(" + %d*x^%d", bac[i], i);
				}
			}
		}*/
		linedown;
	}
}
