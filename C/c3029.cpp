#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scand(n) scanf("%lld",&n)
#define scand2(m,n) scanf("%d%d", &m, &n);
#define scanld(n) scanf("%ld", &n)
#define printd(n) printf("%d ", n)
#define printld(n) printf("%ld\n", n)
#define linedown printf("\n")
bool odd(char n[19]){
	bool a = true;
	for (int i=0; i<=strlen(n); i++){
		if (n[i]!='2' || n[i]!='4' || n[i]!='6' || n[i]!='8' || n[i]!= '0'){
			a = false;
			break;
		}
	}
	return a;
}
main(){
	int t;
	scand(t);
	char n[19];
	memset(n, ' ', sizeof(n));
	while (t--){
		gets(n);
		if (odd(n) && strlen(n)!=1) printf("YES"); else printf("NO");
		linedown;
	}
}
