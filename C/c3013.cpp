#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scand(n) scanf("%d",&n)
#define scand2(m,n) scanf("%d%d", &m, &n);
#define scanld(n) scanf("%ld", &n)
#define printd(n) printf("%d ", n)
#define printld(n) printf("%ld\n", n)
#define linedown printf("\n")
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))
bool fibo(int n){
	int a=0, b=1, c, i=0;
	bool ans = false;
	while (i<n){
		if (c==n) {
			ans = true;
			break;
		}
		c=a+b;
		b=c;
		a=b;
	}
	return ans;
}
main(){
	int m,n;
	scand2(m,n);
	for (int i=min(m,n); i<=max(m,n); i++){
		if (fibo(i) && isprime(i)){
			printd(i);
		}
	}
}
