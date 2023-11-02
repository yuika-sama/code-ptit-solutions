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
bool sumprime(int n){
	bool res = true;
	int temp = n;
	while (temp>0){
		if (!isprime(temp%10)){
			res = false;
			break;
		}
		temp/=10;
	}
	return res;
}
main (){
	int a,b,t;
	scand(t);
	while (t--){
		scand2(a,b);
		int d=0;
		for (int i=a; i<=b; i++){
			if (isprime(i) && sumprime(i)){
				d++;
			}
		}
		printd(d);
		linedown;
	}
}
