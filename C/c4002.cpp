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
	bool check = true;
	if (n<2) check = false; else
	if (n==2) check = true; else
	if (n>2 && n%2==0) check = false; else
	{
		for (int i=3; i<=sqrt(n); i+=2){
			if (n%i==0){
				check = false;
				break;
			}
		}
	}
	return check;
}
main(){
	int t;
	scand(t);
	int n,j;
	while (t--){
		scand(n);
		while (n--){
			scand(j);
			if (isprime(j)) printd(j);
		}
		linedown;
	}
}
