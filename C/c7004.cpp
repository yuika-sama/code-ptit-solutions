#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
int gcd(int a, int b){
	if (b==0) return a; 
	else return gcd(b, a%b);
}
int lcm(int a, int b){
	return (a*b)/gcd(a,b);
}
main(){
	int t;
	scan(t);
	for (int k=1; k<=t; k++){
		int a,b,c,d;
		scan(a); scan(b); scan(c); scan(d);
		while (gcd(a,b)!=1){
			int temp = gcd(a,b);
			a/=temp;
			b/=temp;
		}
		while (gcd(c,d)!=1){
			int temp = gcd(c,d);
			c/=temp;
			d/=temp;
		}
		printf("Case #%d:\n", k);
		printf("%d/%d %d/%d\n",a*(lcm(b,d)/b), (lcm(b,d)), c*(lcm(b,d)/d), lcm(b,d)); //rutgon
		int tu = a*(lcm(b,d)/b) + c*(lcm(b,d)/d), mau = lcm(b,d);
		while (gcd(tu,mau)!=1){
			int temp = gcd(tu,mau);
			tu /= temp;
			mau /= temp;
		}
		printf("%d/%d\n", tu, mau); //tong
		tu = a*d; mau = b*c;
		while (gcd(tu,mau)!=1){
			int temp = gcd(tu,mau);
			tu /= temp;
			mau /= temp;
		}
		printf("%d/%d\n", tu, mau); //thuong
	}
}
