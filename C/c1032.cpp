#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scand(n) scanf("%ld",&n)
#define printd(n) printf("%ld\n" , n)
#define linedown printf("\n")
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))
main(){
	int t;
	scand(t);
	while (t--){
		long int n;
		scand(n);
		long int sum=1, temp=0, i=2;
		while (n>1){
			while (n%i==0){
				n/=i;
				temp = i;
			}
			if (temp!=0) sum*=temp;
			temp=0;
			if (i==2) i++; else i+=2;
		}
		printd(sum);
	}
}
