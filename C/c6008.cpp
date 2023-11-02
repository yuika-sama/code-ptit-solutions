#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scand(n) scanf("%d",&n)
#define printd(n) printf("%d " , n)
#define linedown printf("\n")
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))
main(){
	char s[100];
	gets(s);
	char a[100][100], b[100][100];
	char *token = strtok(s, " ");
	int len=0;
	while (token != NULL){
		strcpy(a[len++], token);
		token  = strtok(NULL, " ");
	}
	int cnt = 0;
	bool check = true;
	for (int i=len-1; i>=0; i--){
		check = true;
		for (int j=i-1; j>=0; j--){
			if (strcmp(a[i], a[j])==0){
				check = false;
				break;
			}
		}
		if (check){
			strcpy(b[cnt++], a[i]);
		}
	}
	for (int i=cnt; i>=0; i--) 
	if (i==cnt) printf("%s", b[i]); else printf("%s ", b[i]);
}
