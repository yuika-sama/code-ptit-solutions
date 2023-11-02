#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
long long gcd(long long a, long long b){
	if(b==0) return a;
	else return gcd(b, a%b);
}
long long lcm(long long a, long long b){
	return (a*b) / gcd(a,b);
}
main(){
	int t;
	scan(t);
	while (t--){
		long long m,n;
		scanf("%lld%lld", &m, &n);
		long long res = n;
		for (long long i=n-1; i>=m; i--){
			if (res%i!=0){
				res = lcm(res, i);
			}
		}
		printf("%lld\n", res);
	}
}
