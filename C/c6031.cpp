#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
main(){
	char s[100];
	gets(s);
	int f[100] = {0};
	int res = 0;
	for (int i=0; i<strlen(s); i++){
		int maxval = 1;
		f[i] = 1;
		for (int j=0; j<i; j++){
			if (s[i]>s[j] && f[j]+1>maxval) maxval = f[j] + 1;
		}
		f[i] = maxval;
		res = fmax(res, maxval);
	}
	print(26-res);
	//linedown;
}
