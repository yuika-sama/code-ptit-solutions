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
	char s[1000];
	gets(s);
	char a[1000][1000];
	int n = 0;
	for (int i=0; i<strlen(s); i++){
		if (s[i]>='A' && s[i]<='Z'){
			s[i]+=32;
		}
	}
	char *token = strtok(s, " ");
	while (token != NULL){
		strcpy(a[n], token); ++n;
		token = strtok(NULL, " ");
	}
	for (int i=0; i<n-1; i++){
		if (strcmp(a[i], "1") !=0){
			int dem = 1;
			for (int j=i+1; j<n; j++){
				if (strcmp(a[i], a[j]) == 0){
					dem++;
					strcpy(a[j],"1");
				}
			}
			printf("%s %d\n", a[i], dem);
		}
	}
}
