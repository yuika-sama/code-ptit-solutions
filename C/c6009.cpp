#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
main(){
	int t;
	scan(t);
	getchar();
	while (t--){
		char s[20];
		gets(s);
		bool check[4];
		for (int i=0; i<4; i++) check[i] = true;
		if (s[6] == s[7] && s[7] == s[8] && s[11] == s[10]) check[0] = true; else check[0] = false;
		if (s[6] == s[7] && s[7] == s[8] && s[11] == s[10] && s[8] == s[10]) check[1] = true; else check[1] = false;
		if (s[6]<s[7] && s[7]<s[8]&&s[8]<s[10]&&s[10]<s[11]) check[2] = true; else check[2] = false;
		for (int i=6; i<strlen(s); i++){
			if (i!=9){
				if (s[i]!='6' && s[i]!='8'){
					check[3] = false;
					break;
				}
			}
		}
		if (check[0] == true || check[1] == true || check[2] == true || check[3] == true){
			printf("YES\n");
		}
		else printf("NO\n");
	}
}
