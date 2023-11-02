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
	char c[100];
	scanf("%s", c);
	
	char *token = strtok(s, " ");
	while (token != NULL){
		if (strcmp(token, c)!=0){
			printf("%s ", token);
		}
		token = strtok(NULL, " ");
	}
}
