#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
main(){
	char s[200];
	gets(s);
	while (strlen(s)>1){
		int len = strlen(s);
		char n1[100], n2[100];
		strncpy(n1, s, len/2);
		n1[len/2] = '\0';
		strcpy(n2,s+len/2);
		int sum = atoi(n1) + atoi(n2);
		printf("%d\n", sum);
		sprintf(s, "%d", sum);
	}
}
