#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%lld " , n)
#define linedown printf("\n")
main(){
	int n;
	scan(n);
	int x,y;
	long int min1 = 9999999, min2 = 9999999;
	for (int i=0; i<n; i++){
		scan(x); scan(y);
		min1 = fmin(x,min1);
		min2 = fmin(y,min2);
	}
	print(min1 *min2);
}

