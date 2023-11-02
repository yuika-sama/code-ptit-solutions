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
	while(t--){
		char a[19];
		scanf("%s", a);
		bool check = true;
		for (int i=0; i<strlen(a); i++){
			switch(a[i]){
				case '0':
				case '1':
				case '2':
				break;
				default: check = false; break;
			}
				if (!check) break;
		}
		if (check) printf("YES\n"); else printf("NO\n");
	}
	
}
