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
	int t;
	scand(t);
	getchar();
	while (t--){
		char s[19];
		memset(s, 0, sizeof(s));
		gets(s);
		bool check=true;
		for (int i=0; i<strlen(s); i++){
			if (s[i]!=48 || s[i]!=49 || s[i]!=50){
				printf("%d ", s[i]);
			}
		}
		if (check) printf("YES\n"); else printf("NO\n");
	}
}
