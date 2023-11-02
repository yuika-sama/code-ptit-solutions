#include<stdio.h>
#include<math.h>
#include<string.h>
#define scand(n) scanf("%d",&n)
#define scanld(n) scanf("%ld", &n)
#define printd(n) printf("%d\n", n)
#define printld(n) printf("%ld\n", n)
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int a;
	for (int i=1; i<=n; i++){
		a = a + i*pow(10, n+1-i);
	}
	a/=10;
	int first;
	int mid;
	int b;
	//a/=10;
	printd(a);
	for (int i=1; i<=m-1; i++){
		first = (a - (a%(int)pow(10, n-1))) / (int)pow(10, n-1);
		mid = a%(int)pow(10, n-1);
		a = mid*10+first;
		printd(a);
	}
}
