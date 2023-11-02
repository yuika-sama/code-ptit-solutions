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
	char s[19];
	int r[19];
	while (t--){
		scanf("%s", s);
		bool check = true;
		bool first = false;
		int pos = -1;
		for (int i=0; i<strlen(s); i++){
			if (s[i]=='1') 
			{
				if (!first)
				{
					first = true;
					pos = i;
				}
				r[i] = 1;
			}
			
			
			else
			if (s[i]=='0' || s[i]=='8' || s[i]=='9') r[i] = 0; else
			{
				check = false;
				printf("INVALID");
				break;
			}
		}
		if (check) {
			if (!first) printf("INVALID"); else {
				for (int i=pos; i<strlen(s); i++) printf("%d",r[i]);
			}
		}
		linedown;
	}
}
