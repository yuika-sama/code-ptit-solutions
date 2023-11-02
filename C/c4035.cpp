#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
main(){
	int n;
	scan(n);
	int sum=0, u, d;
	for (int i=0; i<n; i++){
		scan(u); scan(d);
		sum+=u; sum+=d;
		sum-=fmin(u,d);
	}
	print(sum);
}
