#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
bool check(int n){
	long long int temp = n, rev = temp%10;
	temp/=10;
	int sum = rev;
	bool have6 = false;
	while (temp > 0){
		if (temp%10==6) have6 = true;
		sum+=temp%10;
		rev = rev*10 + temp%10;
		temp/=10;
	}
	return rev==n && have6 && sum%10==8;
}
main(){
	int a,b;
	int max = fmax(a,b), min = fmin(a,b);
	scan(a); scan(b);
	int d=0;
	for (int i=min; i<=max; i++){
		if (check(i)){
			d++;
			//print(i); //linedown;
		}
	}
	print(d);
}
