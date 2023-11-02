#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%lld " , n)
#define linedown printf("\n")
bool div10(long long int n){
	int temp = 0;
	while (n>0){
		temp += n%10;
		n/=10;
	}
	return temp%10==0;
}
bool palin(long long int n){
	long long int temp = n, rev = n%10;
	temp/=10;
	while (temp>0){
		rev = rev*10 + temp%10;
		temp/=10;
	}
	return n==rev;
}
main(){
	int t;
	scan(t);
	while (t--){
		int n;
		scan(n);
		long int d=0;
		long long int begin = (int)pow(10, n-1), end = (int)pow(10, n);
		for (long long int i=begin; i<end; i++){
			if (palin(i) && div10(i)){
				d++;		
			}
		}
		print(d); linedown;
	}
}
