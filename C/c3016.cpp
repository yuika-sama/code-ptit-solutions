#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scand(n) scanf("%lld",&n)
#define printd(n) printf("%lld " , n)
#define linedown printf("\n")
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))
bool isPerfectSquare(int n) {
    int root = sqrt(n);
    return (root * root == n);
}
main(){
	int t;
	scanf("%d", &t);
	while (t--){
		long long int n;
		scand(n);
		long long int a=0, b=1,c=1;
		bool check = false;
		while (c<n){
			a=b;
			b=c;
			c=a+b;
		}
		if (c==n || isPerfectSquare(5 * n * n + 4) || isPerfectSquare(5 * n * n - 4)) printf("YES\n"); else printf("NO\n");
	}
}
