#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scand(n) scanf("%d",&n)
#define scand2(m,n) scanf("%ld%ld", &m, &n);
#define scanld(n) scanf("%ld", &n)
#define printd(n) printf("%d\n", n)
#define printld(n) printf("%ld  ", n)
#define linedown printf("\n")
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))
main(){
	int t;
	char s[19];
	scand(t);
	int c=0, l=0;
	while (t--){
		scanf("%s", s);
		if (s[strlen(s)-1]%2!=0){
			c=0; l=0;
			for (int i=0; i<strlen(s); i++){
				if (s[i]%2==0) c++;
				if (s[i]%2!=0) l++;
			}
			if (c<l) printf("YES\n"); else printf("NO\n");
		} else printf("NO\n");
	}
}
