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
	int t;
	scan(t);
	while(t--){
		int n,p;
		scan(n); scan(p);
		int d=0;
		for (int i=1; i<=n; i++){
			if (i%p==0){
				int j=i;
				while (j%p==0){
					d++;
					j/=p;
				}
			}
		}
		print(d); linedown;
	}
}
