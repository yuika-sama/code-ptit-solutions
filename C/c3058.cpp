#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
#define scan(n) scanf("%lld",&n)
#define print(n) printf("%lld " , n)
#define linedown printf("\n")
#define lli long long int
lli gcd(lli a, lli b){
	if (b==0) return a;
	else return gcd(b, a%b); 
}
lli find_lcm(lli n){
	lli lcm = 1;
	for (int i=2; i<=n; i++){
		lli gcd_val = gcd(lcm, i);
		lcm = (lcm*i) / gcd_val;
	}
	return lcm;
}
main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		printf("%lld", find_lcm(n));
		linedown;
	}
}
