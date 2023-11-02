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
	scanf("\n");
	while (t--){
		char s1[50], s2[50];
		gets(s1);
		scanf("\n");
		gets(s2);
		int heso[10000] = {0};
		char a[10000][50];
		int n=0;
		char *token = strtok(s1, " ");
		while (token!=NULL){
			if (strcmp(token, "+")!=0){
				strcpy(a[n++], token);
			}
			token = strtok(NULL, " ");
		}
		token = strtok(s2, " ");
		while (token!=NULL){
			if (strcmp(token, "+")!=0){
				strcpy(a[n++], token);
			}
			token = strtok(NULL, " ");
		}
		int max=-1;
		for (int i=0; i<n; i++){
			for (int j=0; j<strlen(a[i]); j++){
				int tmp;
				if (a[i][j] == '*'){
					char temp[10];
                    strncpy(temp, a[i], j);
                    sscanf(temp, "%d", tmp);
                    max = fmax(tmp, max);
				}
				if (a[i][j] == '^') {
                    char temp[10];
                    int tm;
                    strncpy(temp, a[i]+j, strlen(a[i])-j-1);
                    sscanf(temp, "%d", tm);
                    heso[tmp] += tm;
                }
			}
		}
		for (int i=0; i<max; i++){
			if (heso[i]!=0){
				printf("%d %d\n", i, heso[i]);
			}
		}
		linedown;
	}
}
