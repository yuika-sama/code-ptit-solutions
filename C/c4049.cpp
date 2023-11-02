#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
int gcd(int a, int b){
	if (b==0) return a; else return gcd(b, a%b);
}
int lcm(int a, int b){
	return (a*b) / gcd(a,b);
}
main(){
	int t;
	scan(t);
	while (t--){
		int n;
		scan(n);
		int a[n];
		for (int i=0; i<n; i++) scan(a[i]);
		print(lcm(1, a[0])); // in me may a0 di cho nhanh
		for (int i=0; i<n-1; i++) print(lcm(a[i], a[i+1]));
		print(a[n-1]); // them phan tu cuoi for sure
		linedown;
	}
}
