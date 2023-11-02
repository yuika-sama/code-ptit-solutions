#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scand(n) scanf("%d",&n)
#define printd(n) printf("%ld " , n)
#define linedown printf("\n")
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))
main(){
	int n;
	scand(n);
	long int sum = 0;
	while (n--){
		int x;
		scand(x);
		int i=2;
		while (x>0){
			while (x%i==0){
				sum+=i;
				x/=i;
			}
			i++;
		}
	}
	printd(sum);
}
