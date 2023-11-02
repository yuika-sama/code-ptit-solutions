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
bool isprime(long int n){
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
int main(){
	int t;
	scand(t);
	long int n;
	
	while (t--){
		scanld(n);
		int i=2;
		int dem = 0;
		bool star = false;
		printf("%d =", n);
		while (n>0 && i<=n){
			while (n%i==0 && isprime(i)){
				n/=i;
				dem++;
			}
			if (dem>0 && !star){
				printf(" %d^%d", i, dem);
				star = true;
			}else if (dem >0){
				printf(" * %d^%d", i, dem);
			}
			if (i==2) i++; else i+=2;
			dem = 0;
		}
		linedown;
	}
}
