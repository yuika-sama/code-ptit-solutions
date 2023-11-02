#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scand(n) scanf("%d",&n)
#define scand2(m,n) scanf("%d%d", &m, &n);
#define scanld(n) scanf("%ld", &n)
#define printd(n) printf("%d ", n)
#define printld(n) printf("%ld\n", n)
#define linedown printf("\n")
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))
int sumofnum(long int n){
	long int temp = n;
	int sum=0;
	while (n>0){
		sum+=n%10;
		n	/=10;
	}
	return sum;
}
int prime(long int n){
	long int i=2, temp2=n;
	int sum1=0;
	for (int i=2; i<=n;){
		while (n%i==0){
			n/=i;
			sum1+=sumofnum(i);
		}i++;
	}
	return sum1;
}
int main(){
	long int n;
	scanld(n);	
	if(sumofnum(n) == prime(n)) printf("YES"); else printf("NO");
}
