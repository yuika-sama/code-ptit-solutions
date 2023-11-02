#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scand(n) scanf("%d",&n)
#define printd(n) printf("%lld\n" , n)
#define linedown printf("\n")
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))
int main(){
	char s[200];
	scanf("%s", s);
	char a[100], b[100];
	while (strlen(s)>1){
		int len = strlen(s);
		memset(a, 0, sizeof(a));
		memset(b, 0, sizeof(b));
		for (int i=0; i<len/2; i++){
			a[i] = s[i];
		}
		int j=0;
		for (int i=len/2; i<len;i++){
			b[j++] = s[i];
		}
		ltoa(atoi(b)+atoi(a), s, 10);
		puts(s);
	}
}
