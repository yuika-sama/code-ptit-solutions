#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scand(n) scanf("%d",&n)
#define scanld2(m,n) scanf("%ld%ld", &m, &n);
#define scanld(n) scanf("%ld", &n)
#define printd(n) printf("%d\n", n)
#define printld(n) printf("%ld\n", n)
#define linedown printf("\n")
long int gcd(long int a, long int b)
{
	while (a!=b){
		if (a>b) a-=b;
		if (a<b) b-=a;
	}
	return a;
}
main(){
	long int m,n;
	scanld2(m,n);
	printld(gcd(m,n));
	printld((m*n)/gcd(m,n));
}
