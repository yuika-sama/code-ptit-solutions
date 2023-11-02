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
		bool check = true;
		for (int i=0; i<strlen(s); i++){
			if (s[i]!=s[strlen(s)-i-1]){
				check = false;
				break;
			}
		}
		if (check) printf("YES\n"); else printf("NO");
	}
}
