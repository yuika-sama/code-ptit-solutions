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
		char s[1000];
		gets(s);
		if (s[0] == '0')printf("INVALID\n"); else {
			int c=0, l=0;
			bool check = false;
			for (int =0; i<strlen(s); i++){
				if (s[i]%2==0) c++;
				if (s[i]%2!=0) l++;
				if (!(s[i]>=48 && s[i]<=57)){
					check = true;
					break;
				}
			}
			if (check) printf("INVALID\n"); else{
				if (strlen(s)%2==0 && c>l) printf("YES\n"); else
				if (strlen(s)%2!=0 && c<l) printf("YES\n"); else
				printf("NO\n");
			}
		}
	}	
}
