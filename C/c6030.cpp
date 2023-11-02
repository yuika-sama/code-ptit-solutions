#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
main(){
	char s[20];
	int max = -1,n=0;
	char a[10000][20];
	while (scanf("%s", s)==1){
		strcpy(a[n++], s);
		max = fmax(max, strlen(s));
	}
	for (int i=0; i<n-1; i++){
		if (strlen(a[i]) == max && strcmp(a[i],"1")!=0){
			int t=1;
			for (int j=i+1; j<n; j++){
				if (strcmp(a[i], a[j]) == 0){
					t++;
					strcpy(a[j], "1");	
				}
			}
			printf("%s %d %d\n", a[i], max, t);
		}
	}
}
