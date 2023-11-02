#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scand(n) scanf("%d",&n)
#define scand2(m,n) scanf("%ld%ld", &m, &n);
#define scanld(n) scanf("%ld", &n)
#define printd(n) printf("%d\n", n)
#define printld(n) printf("%ld  ", n)
#define linedown printf("\n")
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))
bool palin(long int n){
	long int s=0, temp=n;
	int d=1, scs = (int)log10(n);
	while (temp>0){
		s+=(temp%10)*(int)pow(10,scs-d+1);
		d++;
		temp/=10;
	}
	return s==n;
}
bool not4(long int n){
	bool check = true;
	while (n>0){
		if (n%10==4){
			check = false;
			break;
		}
		n/=10;
	}
	return check;
}
bool sumby10(long int n){
	return n%10==0;
}
void solve(int n){
	for (long int i=(int)pow(10, (int)log10(n)-1); i<(int)pow(10, (int)log10(n)); i++){
		if (palin(i) && not4(i) && sumby10(i)) {
			printld(i);
		}
	}
}
main(){
	int t=0;
	int n;
	scand(t);
	while (t--){
		scand(n);
		solve(n);
		linedown;
	}
}
