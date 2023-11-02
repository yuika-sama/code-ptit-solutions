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
	while (t--){
		char s[20];
		gets(s);
		int p=1, n=strlen(s);
		if (n%2==0){
			for (int i=0; i<n/2; i++){
				if (s[i]!=s[n-i-1]){
					p--;
				}
			}
			if (p==0) printf("YES\n"); else printf("NO\n");
		} else {
			for (int i=0, i<n/2; i++){
				if (s[i]!=s[n-i-1]){
					p--;
				}
			}
			if (p==0 || p==1) printf("YES\n"); else printf("NO\n");
		}
	}
}
