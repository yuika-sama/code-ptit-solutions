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
	char s[255]={};
	gets(s);
	int c=0, so=0, k=0;
	for (int i=0; i<strlen(s); i++){
		if (s[i]>='a'&&s[i]<='z')c++; else
		if (s[i]>='A'&&s[i]<='Z')c++; else
		if (s[i]>='0'&&s[i]<='9')so++;
		else k++;
	}
	printf("%d %d %d",c,so,k);
}
