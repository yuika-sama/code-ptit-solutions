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
	char s[100005];
	gets(s);
	char res[100005];
	char temp = s[strlen(s)-1];
	int dem = 0;
	for (int i=strlen(s)-1; i>=0; i--){
		if (s[i] == temp){
			res[dem++] = s[i];
		} else if (s[i]>temp){
			temp = s[i];
			res[dem++] = s[i];
		}
	}
	for (int i=dem-1; i>=0; i--){
		printf("%c", res[i]);
	}
}
