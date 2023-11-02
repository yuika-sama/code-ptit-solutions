#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
bool palin(char s[]){
	for (int i=0; i<strlen(s)/2; i++){
		if (s[i]!=s[strlen(s)-i-1]){
			return false;
			break;
		}
	}
	return true;
}
main(){
	char s[10000];
	char a[10000][2000];
	int n=0;
	gets(s);
	puts(s);
}
