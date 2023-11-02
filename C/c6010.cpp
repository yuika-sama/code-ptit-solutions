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
bool isprime(char s[500]){
	bool check = true;
	for (int i=0; i<strlen(s); i++){
		if (s[i] == '2' || s[i] == '3' || s[i] == '5' || s[i] == '7'){}
		else{
			check = false;
			break;
		}
	}
	return check;
}
bool palin(char s[500]){
	//return true;
	for (int i=0; i<strlen(s)/2; i++){
		if (s[i]!=s[strlen(s)-i-1]){
			return false;
			break;
		}
	}
	return true;
}

main(){
	int t;
	scand(t);
	getchar();
	while (t--){
		char s[500];
		gets(s);
		if(isprime(s) && palin(s)){
			printf("YES\n");
		} else printf("NO\n");
	}
}
