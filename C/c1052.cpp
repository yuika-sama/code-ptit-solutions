#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scand(n) scanf("%d",&n)
#define scanld(n) scanf("%ld", &n)
#define scanlld(n) scanf("%lld", &n)
#define printd(n) printf("%d\n", n)
#define printld(n) printf("%ld\n", n)
int main(){
	int t;
	long int n;
	unsigned long int d;
	scand(t);
	while (t--){
		scanld(n);
		if (n%2==0) d=1; else d=0;
		while (n%2==0) {
			d++;
			n/=2;
		}
		int d1=0;
		int i=1;
		while (i<=d){
			d-=i;
			i++;
			d1++;
		}
		d1+=d;
		printd(d1);
	}
}
