#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
bool compare(char s1[], char s2[]){
	char ss1[50], ss2[50];
	strcpy(ss1, s1); strcpy(ss2, s2);
	for (int i=0; i<strlen(ss1); i++) if (ss1[i]>='A' && s1[i]<='Z') ss1[i] +=32;
	for (int i=0; i<strlen(ss2); i++) if (ss2[i]>='A' && s2[i]<='Z') ss2[i] +=32;
	return strcmp(ss1, ss2);
}
main(){
	int t;
	scan(t);
	for (int d=1; d<=t; d++){
		char s1[50], s2[50];
		scanf("\n");
		gets(s1);
		scanf("\n");
		gets(s2);
		char a[100][100], *token = strtok(s1, " ");
		int n=0;
		printf("Test %d: ", d);
		while (token!=NULL){
			if (compare(token, s2)!=0) printf("%s ", token);
			token = strtok(NULL, " ");
		}
		linedown;
	}
}
