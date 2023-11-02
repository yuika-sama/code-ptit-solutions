#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
main(){
	char s[205],a[105], temp[105];
	gets(s);
	while(strlen(s)>1){
		int n = strlen(s);
		int s1 = n/2 - 1;
		int s2 = n - 1;
		int remember = 0;
		for (int i=0; i<n/2; i++){
			int digit = (s[s1-i] - '0') + (s[s2-i] -'0') + remember;
			remember = digit/10;
			digit%=10;
			a[s1 + n%2 - i] = digit + '0';
		}
		a[n/2 + n%2] = '\0';
		if (n%2==1) a[0] = ((s[n/2] - '0') + remember) + '0';
		else if(remember > 0){
			strcpy(temp,"1");
			strcat(temp,a);
			strcpy(a,temp);
		}
		strcpy(s,a);
		if(s[0]!='0'){
			printf("%s\n", s);
		} else {
			for (int i=1; i<n; i++){
				printf("%c", s[i]);
			}
		}
	}
}
