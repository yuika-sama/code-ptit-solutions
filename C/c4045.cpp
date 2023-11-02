#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scan(n) scanf("%d",&n)
#define print(n) print("%d " , n)
#define linedown printf("\n")
main(){
	int t;
	scan(t);
	getchar();
	while (t--){
		char kitu=' ';
		int x;
		int c=0, l=0, d=0;
		while (kitu==' '){
			scan(x);
			if (x%2==0) c++; else l++;
			d++;
			kitu = getchar();
		}
		if (d%2==0 && c>l) printf("YES\n"); else if (d%2!=0 && c<l) printf("YES\n"); else printf("NO\n");
	}
}
