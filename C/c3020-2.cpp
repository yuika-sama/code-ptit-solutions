#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
bool check(int n){
	int temp = n, sum = 0, new_num = 0;
	bool have6 = false;
	while (temp>0){
		new_num = new_num*10 + temp%10;
		sum += temp%10;
		if (temp%10==6) have6 = true;
		temp/=10;
	}
	return have6 && sum%10==8 && new_num==n;
}
main(){
	int a,b;
	scan(a); scan(b);
	if (a>b){
		int temp = a;
		a = b;
		b = temp;
	}
	int d=0;
	for (int i=a; i<=b; i++){
		if (check(i)){
			print(i);
		}
	}
}
