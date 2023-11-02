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
		if (s[i]!= s[strlen(s)-1-i]){
			return false;
			break;
		}
	}
	return true;
}
main(){
	char s[20];
	char a[10000][20];
	int n=0, max=0;
	while (scanf("%s", s)!=-1){
		if (palin(s)){
			strcpy(a[n++], s);
			max = fmax(strlen(s), max);
		}
	}
	for (int i=0; i<n; i++){
		if (strlen(a[i]) == max && strcmp(a[i], "1") != 0){
			int t=1;
			for (int j=i+1; j<n; j++){
				if (strcmp(a[i], a[j])==0){
					t++;
					strcpy(a[j], "1");
				}
			}
			printf("%s %d\n", a[i], t);
		}
	}
}
