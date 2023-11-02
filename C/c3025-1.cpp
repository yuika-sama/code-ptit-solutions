#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
bool isprime(int n){
	if (n<2) return false; else
	if (n==2) return true; else;
	if (n>2 && n%2==0) return false; else
	{
		for (int i=3; i<=sqrt(n); i+=2){
			if (n%i==0){
				return false;
				break;
			}
		}
	}
	return true;
}
bool fullprime(int n){
	int sum = 0;
	bool check = true;
	while (n){
		sum+=n%10;
		if (!isprime(n%10)) check = false;
		n/=10;
	}
	return (isprime(sum) && check);
}
main(){
	int t;
	scan(t);
	while (t--){
		int a,b;
		scan(a); scan(b);
		int d=0;
		for (int i=a; i<=b; i++){
			if (isprime(i) && fullprime(i)){
				d++;
			}
		}
		print(d);
		linedown;
	}
}
