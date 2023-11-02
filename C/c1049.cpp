#include<stdio.h>
#include<math.h>
#include<string.h>
#define scand(n) scanf("%d",&n)
#define scanld(n) scanf("%ld", &n)
#define printd(n) printf("%d\n", n)
#define printld(n) printf("%ld\n", n)
int main(){
	int t;
//	int chan, le;
//	scanf("%d", &t);
	scand(t);
	int chan, le;
	long int n;
	while(t--){
		chan = 0; le = 0;
		scanld(n);
		while (n>0){
			if ((n%10)%2 == 0) chan++; else le++;
			n/=10;
		}
		printf("%d %d\n", le, chan);
		//n/=10;
	}
}
