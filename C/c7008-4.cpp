#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
bool deohieulam = true;
void solve(char s1[], int *bac, int *max, int *min){
	char *token = strtok(s1, " ");
	int first_try = 0;
	while (token!=NULL){
		if (strcmp(token, "+")!=0){
			first_try+=1;
			int hs = 0;
			for (int i=0;;i++){
				if (token[i] == '*') break;
				hs += hs*10 + (token[i] - '0');
			}
			int lv = 0, j=0;
			for (int i=strlen(token)-1;;i--){
				if (token[i] == '^') break;
				lv = lv + (token[i]-'0')*(int)pow(10, j++);
			}
			//if (first_try == 1 && deohieulam ==  false) hs-=1;
			bac[lv] += hs;
			*min = fmin(*min, lv);
			*max = fmax(*max, lv);
		}
		token = strtok(NULL, " ");
	}
}
main(){
	int t;
	scan(t);
	scanf("\n");
	while (t--){
		char s1[1000],s2[1000];
		int bac[10000];
		for (int i=0; i<=10000; i++) bac[i] = 0;
		gets(s1);
		scanf("\n");
		gets(s2);
		char s[1000][1000];
		int max = -1, min = 10001;
		solve(s1, bac, &max, &min);
		deohieulam = false;
		solve(s2, bac, &max, &min);
		for (int i=max; i>=min; i--){
			if (bac[i]!=0){
				if (i>min) printf("%d*x^%d + ", bac[i], i); else printf("%d*x^%d", bac[i], i);
			} 
		}
		linedown;
	}
}
