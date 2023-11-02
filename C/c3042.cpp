#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scand(n) scanf("%d",&n)
#define scand2(m,n) scanf("%ld%ld", &m, &n);
#define scanld(n) scanf("%ld", &n)
#define printd(n) printf("%d\n", n)
#define printld(n) printf("%ld\n", n)
#define linedown printf("\n")
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))
bool decrease(long int i){
	bool check = true;
	int a=i%10;
	i/=10;
	while (i>0){
		if (a>=i%10){
			check = false;
			break;
		}
		a=i%10;
		i/=10;
	}
	return check;
}
int count(long int a, long int b){
	int d=0;
	for (long int i=a; i<=b; i++){
		if (decrease(i)){
			d++;
		}
	}
	return d;
}
main(){
	int t=0;
	long int a,b;
	scand(t);
	while (t--){
		scand2(a,b);
		printd(count(a,b));
	}
}
