#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scand(n) scanf("%d",&n)
#define printd(n) printf("%ld\n", n);
#define linedown printf("\n")
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))
bool div10(long long int n){
	int sum = 0;
	while (n>0){
		sum+=n%10;
		n/=10;
	}
	return (sum%10==0);
}
bool palin(long long int n){
	bool res = true;
	int m=0;
	int temp = n;
	int count = 0;
	char s[7];
	sprintf(s, "%lld", n);
	int x = strlen(s);
	while (temp>0){
		if (temp%10 ==0 ) {
			count++;
			temp/=10;
		}
		m += (temp%10)*(int)pow(10, x-count);
		count++;
		temp/=10;
	}
	m/=10;
	if (n ==m) res = true; else res = false;
	return res;
}
main(){
	int t;
	scanf("%d", &t);
	while (t-->0){
		int n;
		scand(n);
		long int d=0;
		for (long long int i = (long long int)pow(10, n-1); i<(long long int)pow(10,n); i++){
			if (palin(i) && div10(i)){
				d++;
			}
		}printd(d);
	}
}
