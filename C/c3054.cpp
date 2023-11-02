#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scand(n) scanf("%d",&n)
#define scand2(m,n) scanf("%d%d", &m, &n);
#define scanld(n) scanf("%ld", &n)
#define printd(n) printf("%d ", n)
#define printld(n) printf("%ld  ", n)
#define linedown printf("\n")
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))
main(){
	int t;
	scand(t);
	while (t--){
		char s[20];
		char r[20];
		bool ans = true;
		scanf("%s", s);
		for (int i=0; i<strlen(s); i++){
			if (s[i]=='1') r[i]=='1';
			if (s[i]=='0') r[i]=='0';
			if (s[i]=='9') r[i]=='0';
			if (s[i]=='8') r[i]=='0';
			if (s[i]!='1' ||s[i]!='8' || s[i]!='9' || s[i]!='0'){
				ans = false;
				printf("INVALID");
				break;
			}
		}
		if (ans) {
			
			while (r[0] == '0'){
				strcpy(&r[0], &r[1]);
			}
			printf("%s", r);
		}
		linedown;
	}
}
