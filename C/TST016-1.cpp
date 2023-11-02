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
	scanf("%s", s);
	int n[8] = {0};
	for (int i=0; i<strlen(s)-1; i++){
		if (s[i]=='(') n[0]++;
		if (s[i]==')') n[1]++;
		if (s[i]=='[') n[2]++;
		if (s[i]==']') n[3]++;
		if (s[i]=='{') n[4]++;
		if (s[i]=='}') n[5]++;
		if (s[i]=='"') n[6]++;
		if (s[i]==39)  n[7]++;
	}
	
	printf("%s", s);
}
