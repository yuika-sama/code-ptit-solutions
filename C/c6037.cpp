#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
main(){
	char s[200];
	gets(s);
	int res = 0;
	for (int i=0; i<51; i++){
		int p = 0;
		for (int j=i+1; j<52; j++){
			if (s[i] == s[j]){
				p = j;
			}
		}
		if (p==0 || p==i+1) continue;
		int count[200] = {0};
		for (int j=i+1; j<p; j++){
			count[s[j]]++;
		}
		for (int j='A'; j<='Z'; j++){
			if (count[j]==1) res++;
		}
	}
	print(res/2);
}
