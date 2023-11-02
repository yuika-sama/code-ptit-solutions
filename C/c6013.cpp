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
	getchar()-48;
	while (t--){
		char s[1000];
		gets(s);
		bool check[10], inva = false, fullbuy = true;
		for (int i=0; i<10; i++){
			check[i] = false;
		}
		if (s[0] == '0') inva = true;
		for (int i=0; i<strlen(s); i++){
			if (s[i]>=48 && s[i]<=57){
				check[s[i]-48] = true;
			} else inva = true;
		}
		
		if (inva) printf("INVALID\n"); else {
			for (int i=0; i<10; i++){
				if (check[i] == false){
					fullbuy = false;
					break;
				}
			}
			if (fullbuy) printf("YES\n"); else printf("NO\n");
		}
	}
}
