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
bool gapdoi(char a, char b){
	if (a=='2' && b=='4') return true; else
	if (a=='1' && b=='2') return true; else
	if (a=='3' && b=='6') return true; else
	if (a=='4' && b=='8') return true; else
	return false;
}
bool palin(char s[19]){
	bool check = true;
	for (int i=1; i<strlen(s)/2; i++){
		if (s[i]!=s[strlen(s)-1-i]){
			check = false;
			break;
		}
	}
	return check;
}
main(){
	int t;
	scand(t);
	char s[19];
	while(t--){
		scanf("%s", s);
		if ((gapdoi(s[0], s[strlen(s)-1]) || gapdoi(s[strlen(s)-1], s[0])) && palin(s)){
			printf("YES\n");
		} else printf("NO\n");
	}
}
