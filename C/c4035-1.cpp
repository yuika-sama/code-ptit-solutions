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
	int n;
	scan(n);
	int sumu=0, sumd=0, minu=50001, mind=50001, u,d;
	for (int i=0; i<n; i++){
		scan(u); scan(d);
		sumu+=u;
		sumd+=d;
		minu = fmin(minu, u);
		mind = fmin(mind, d);
	}
	
	sumu+=mind;
	sumd+=minu;
	if (sumu>sumd) print(sumu); else print(sumd);
}
