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
		char s[100];
		gets(s);
		int b[100] = {0};
		for (int i=0; i<strlen(s); i++){
			b[s[i]]++;
		}
		for (int i=0; i<strlen(s); i++){
			if (b[s[i]]>0){
				printf("%c%d", s[i], b[s[i]]);
				b[s[i]] = 0;
			}
		}
		linedown;
	}
}
