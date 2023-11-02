#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
main(){
	int t;
	scan(t);
	for (int d=1; d<=t; d++){
		int n; scan(n);
		long int a[n];
		for (int i=0; i<n; i++) scanf("%ld" , &a[i]);
		long long int sum = 0, res = -1e18;
		for (int i=0; i<n; i++){
			sum += a[i]; 
			if (sum<0) sum = 0;
			res = fmax(sum, res);
		}
		printf("%ld\n", res);
	}
}
