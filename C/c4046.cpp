#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
#define scan(n) scanf("%ld",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
void swap(long long *a, long long *b){
	long long temp = *a;
	*a = *b;
	*b = temp;
}
int sosanh (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
main(){
	int t;
	scan(t);
	while (t--){
		int n;
		scan(n);
		long long a[100000];
		for (int i=0; i<n; i++) scan(a[i]);
		bool check = false;
		qsort(a, n, sizeof(long long), sosanh);
		int pair = 0;
		long long min = 99999999;
		for (int i=0; i<n-1; i++){
			min = fmin(min, abs(a[i] - a[i+1]));
		}
		for (int i=0; i<n-1; i++){
			if (abs(a[i] - a[i+1]) == min){
				pair++;
			}
		}
		printf("%ld %d\n", min, pair);
	}
}
