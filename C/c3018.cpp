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
bool isprime(int n){
	bool res = true;
	if (n<2) res = false;
	else if (n==2) res = true;
	else if (n!=2 && n%2==0) res = false;
	else {
		for (int i=3; i<=sqrt(n); i+=2){
			if(n%i==0){
				res = false;
				break;
			}
		}
	}
	return res;
}
bool fibo(int n){
	int a=0, b=1, c=1;
	int temp=n, sum=0;
	while (temp>0){
		sum+=temp%10;
		temp/=10;
	}
	while (c<sum){
		c=a+b;
		a=b;
		b=c;
	}
	return sum==c;
}
main(){
	int m,n;
	scand2(m,n);
//	int mx = max(m,n);
	for (int i=min(m,n); i<=max(m,n);i++){
		if (isprime(i) && fibo(i)){
			printd(i);
		}
	}
}
