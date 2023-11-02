#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scand(n) scanf("%d",&n)
#define scanld(n) scanf("%ld", &n)
#define scanlld(n) scanf("%lld", &n)
#define printd(n) printf("%d\n", n)
#define printld(n) printf("%ld\n", n)
int min(int a, int b){
	if (a<b) return a; else return b;
}
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printd(min(a,min(b,c)));
}
