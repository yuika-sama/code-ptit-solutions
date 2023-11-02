#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scand(n) scanf("%d",&n)
#define printd(n) printf("%lld\n" , n)
#define linedown printf("\n")
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))
main(){
	int t;
	scand(t);
	long long sum = 0;
	while (t--){
		int n;
		scand(n);
		while (n%2==0){
			n/=2;
			sum+=2;
		}
		for (int i=3; i<=sqrt(n); i+=2){
			while (n%i==0){
				n/=i;
				sum+=i;
			}
		}
		if (n>1) sum+=n;
	}
	printd(sum);
}
