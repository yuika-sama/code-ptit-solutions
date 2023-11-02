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
main(){
	char s[200];
	int sum = 0;
	gets(s);
	char a[100];
	while (strlen(s)>1){
		int d=0;
		for (int i=0; i<strlen(s)/2; i++){
			a[d++] = s[i];
		}
		int temp;
		temp = atoi(a);
		sum+=temp;
		
		temp = 0;
		memset(a, 0, sizeof(a));
		d=0;
		for (int i=strlen(s)/2; i<strlen(s); i++){
			a[d++] = s[i];
		}
		temp = atoi(a);
		sum+=temp;
		temp = 0;
		memset(a, 0, sizeof(a));
		
		printd(sum); linedown;
		memset(s, 0, sizeof(s));
		sprintf(s, "%d", sum);
		sum = 0;
	}
	
}
