#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scand(n) scanf("%d",&n)
#define printd(n) printf("%d " , n)
#define linedown printf("\n")
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))
bool isprime(int n){
	bool check = true;
	if (n<2) check = false; else
	if (n==2) check = true; else 
	if (n>2 && n%2==0) check = false; else
	for (int i=3; i<=sqrt(n); i+=2){
		if (n%i==0){
			check = false;
			break;
		}
	}
	return check;
}
main(){
	int n;
	scand(n);
	int d=0;
	for (int i=5; i<n; i+=2){
		int sum = 0, j=i;
		while (j>0){
			sum+=j%10;
			j/=10;
		}
		if (sum%5==0 && isprime(i)){
			printd(i); d++;
	}}
	linedown;
	printd(d);
}
