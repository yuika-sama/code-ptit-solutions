#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scand(n) scanf("%d",&n)
#define scand2(m,n) scanf("%d%d", &m, &n);
#define scanld(n) scanf("%ld", &n)
#define printd(n) printf("%d ", n)
#define printld(n) printf("%ld\n", n)
#define linedown printf("\n")
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))
main(){
	char n[20];
	scanf("%s", n);
	int a=0, b=0, c=0, d=0;
	for (int i=0; i<strlen(n); i++){
		if(n[i] == '2') a++;
		if(n[i] == '3') b++;
		if(n[i] == '5') c++;
		if(n[i] == '7') d++;
	}
	if (a!=0 )printf("2 %d\n", a);
	if (b!=0 )printf("3 %d\n", b);
	if (c!=0 )printf("5 %d\n", c);
	if (d!=0 )printf("7 %d\n", d);
}
