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
bool have9(int n){
	bool check = true;
	while (n>0){
		if (n%10==9){
			check = false;
			break;
		}
		n/=10;
	}
	return check;
}
bool palin(int n){
	bool res = true;
	int m=0;
	int temp = n;
	int count = 0;
	char s[7];
	sprintf(s, "%d", n);
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
	if (n ==m ) res = true; else res = false;
	return res;
}
main(){
	int n;
	scand(n);
	int d=0;
	for (int i=2; i<n; i++){
		if(palin(i) && have9(n)){
			d++;
			printd(i);
		}
	}
	linedown;
	printd(d);
}
