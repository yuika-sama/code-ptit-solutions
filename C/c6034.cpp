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
		char s[50];
		scanf("%s", s);
		int n=0;
		for (int i=0; i<strlen(s); i++){
			if (s[i] == 'X') n+=10;
			if (s[i] == 'I') n+=1;
			if (s[i] == 'V') n+=5;
			if (s[i] == 'C') n+=100;
			if (s[i] == 'L') n+=50;
			if (s[i] == 'D') n+=500;
			if (s[i] == 'M') n+=1000;
			
			if (s[i] == 'X' && s[i-1] == 'I') n-=2;
			if (s[i] == 'V' && s[i-1] == 'I') n-=2;
			if (s[i] == 'L' && s[i-1] == 'X') n-=20;
			if (s[i] == 'C' && s[i-1] == 'X') n-=20;
			if (s[i] == 'D' && s[i-1] == 'C') n-=200;
			if (s[i] == 'M' && s[i-1] == 'C') n-=200;
		}
		print(n); linedown;
	}
}
