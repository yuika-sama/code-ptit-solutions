#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
typedef struct{
	int tu, mau;
} phanso;
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
		phanso a, b;
		scan(a.tu); scan(a.mau); scan(b.tu); scan(b.mau);
		while (gcd(a.tu, a.mau)!=1){
			int temp = gcd(a.tu, a.mau);
			a.tu /= temp;
			a.mau /= temp;
		}
		while (gcd(b.tu,b.mau)!=1){
			int temp = gcd(b.tu, b.mau);
			b.tu /= temp;
			b.mau /= temp;
		}
		printf("Case #%d:\n", k);
		printf("%d/%d %d/%d\n", a.tu*lcm(a.mau,b.mau)/a.mau, lcm(a.mau, b.mau), b.tu*lcm(a.mau, b.mau)/b.mau, lcm(a.mau, b.mau));
		phanso tong;
		tong.tu = a.tu*(lcm(a.mau, b.mau)/a.mau) + b.tu*(lcm(a.mau, b.mau)/b.mau);
		tong.mau = lcm(a.mau, b.mau);
		while (gcd(tong.tu, tong.mau)!=1){
			int temp = gcd(tong.tu, tong.mau);
			tong.tu/=temp;
			tong.mau/=temp;
		}
		printf("%d/%d\n", tong.tu, tong.mau);
		phanso thuong;
		thuong.tu = a.tu*b.mau;
		thuong.mau = a.mau*b.tu;
		while(gcd(thuong.tu, thuong.mau)!=1){
			int temp = gcd(thuong.tu, thuong.mau);
			thuong.tu/=temp;
			thuong.mau/=temp;
		}
		printf("%d/%d\n", thuong.tu, thuong.mau);
	}
}
