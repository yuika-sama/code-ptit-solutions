#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
main(){
	char s[100];
	gets(s);
	int a[8] = {0};
	for (int i=0; i<strlen(s); i++){
		if (s[i] == '(') a[0]++;
		if (s[i] == ')') a[1]++;
		if (s[i] == '{') a[2]++;
		if (s[i] == '}') a[3]++;
		if (s[i] == '[') a[4]++;
		if (s[i] == ']') a[5]++;
		if (s[i] == '"') a[6]++;
		if (s[i] == 39) a[7]++;
		//if (s[i] == '(') a[0]++;
	}
	bool check = true;
	if (a[0]!=a[1]) check = false;
	if (a[2]!=a[3]) check = false;
	if (a[4]!=a[5]) check = false;
	if (a[6]%2!=0) check = false;
	if (a[7]%2!=0) check = false;
	if (check) printf("1"); else printf("0");
}
