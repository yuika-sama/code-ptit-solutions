#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
bool thuannghich(int n){
	int temp = n, num = 0, i=0;
	while (temp>0){
		num = num*10 + temp%10;
		temp/=10;
	}	
	return num==n;
}
bool have9(int n){
	while (n>0){
		if(n%10==9){
			return false;
			break;
		}
		n/=10;
	}
	return true;
}
main(){
	int n;
	scan(n);
	int d=0;
	for (int i=2; i<=n; i++){
		if (thuannghich(i) && have9(i)){
			print(i);
			d++;
		}
	}
	linedown;
	print(d);
}
