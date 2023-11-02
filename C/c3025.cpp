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
int sum(int n){
	int t=0, temp = n;
	while (temp>0){
		t+=temp%10;
		temp/=10;
	}
	return t;
}
int main(){
	int m,n;
	scand2(m,n);
	int sum1=sum(m), sum2=sum(n);
	if (sum1<=sum2){
		printf("%d %d", m, n);
	}
	else if (sum1>sum2){
		printf("%d %d", n, m);
	}
}
