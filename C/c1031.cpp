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
	if (n<2) check=false; else
	if (n==2) check = true; else;
	if (n!=2 && n%2==0) check = false; else
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
	int n;
	scand(n);
	int i=2;
	bool check = true;
	while (n>1){
		while (n%i==0){
			if (check){
				check = false;
				printf("%d", i);
			} else printf("x%d", i);
			n/=i;
		}
		if (i==2) i++; else i+=2;
	}
}
