#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scand(n) scanf("%d",&n)
#define scand2(m,n) scanf("%ld%ld", &m, &n);
#define scanld(n) scanf("%ld", &n)
#define printd(n) printf("%d ", n)
#define printld(n) printf("%ld  ", n)
#define linedown printf("\n")
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))
bool palin(int n){
	int s=0, temp=n;
	int d=1, scs = (int)log10(n);
	while (temp>0){
		s+=(temp%10)*(int)pow(10,scs-d+1);
		d++;
		temp/=10;
	}
	return s==n;
}
bool not4(int n){
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
bool sumby10(int n){
	int s = 0;
	while (n>0){
		s+=n%10;
		n/=10;
	}
	return s%10==0;
}
main(){
	int t,n;
	scand(t);
	while (t--){
		scand(n);
		if(n==2) printf("55\n"); else
		if(n==1) linedown; else
		{
			for (int i=(int)pow(10, n-1); i<=(int)pow(10, n)-1; i++){
				if (sumby10(i) && not4(i) && palin(i)) printd(i);
			}
			linedown;
		}
	}
}
