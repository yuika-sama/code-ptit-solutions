#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
void chuanhoa(char s[]){
	if (s[0] >='a' && s[0]<='z') s[0]-=32;
	for (int i=1; i<strlen(s); i++){
		if (s[i]>='A'&&s[i]<='Z'){
			s[i]+=32;
		}
	}
}
main(){
	int t;
	scan(t);
	getchar();
	while (t--){
		char s[1000];
		gets(s);
		char a[20][80];
		int n=0;
		char *token = strtok(s, " ");
		while (token!=NULL){
			strcpy(a[n], token);++n;
			token = strtok(NULL, " ");
		}
		for (int i=0; i<n; i++) {
            chuanhoa(a[i]);
            printf("%s",a[i]);
            if (i!=n-1) printf(" ");
        }
		linedown;
	}
}
