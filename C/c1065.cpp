#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scand(n) scanf("%lld",&n)
#define printd(n) printf("%d\n" , n)
#define linedown printf("\n")
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))
main(){
	long long int n;
	scand(n);
	int a=0,b=0,c=0,d=0;
	while (n>0){
		if (n%10==2) a++;
		if (n%10==3) b++;
		if (n%10==5) c++;
		if (n%10==7) d++;
		n/=10;
	}       
	if (a!=0) printf("2 %d\n",a);	
	if (b!=0) printf("3 %d\n",b);
	if (c!=0) printf("5 %d\n",c);
	if (d!=0) printf("7 %d\n",d);
}
