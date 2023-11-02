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
int giaithua(int n){
	if (n==0) return 1;
	else if (n==1) return 1;
	else return giaithua(n-1)*n;
}
bool strong(long int n){
	int sum;
	if (n==1) sum = 0; else sum = 0;
	long int temp = n;
	while (temp>0){
		sum+=giaithua(temp%10);
		temp/=10;
	}
	if (sum == n) return true; else return false;
}
main(){
	int m,n;
	scand2(m,n);
	for (int i=min(m,n); i<=max(m,n); i++){
		if (strong(i)){
			printd(i);
		}
	}
}
