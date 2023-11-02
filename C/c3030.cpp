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
bool great(int n){
	int temp = n;
	int a = temp%10;
	temp/=10;
	bool res = true;
	while (temp>0){
		if (a>=temp%10){
		} else {
			res = false;
			break;
		}
		a=temp%10;
		temp/=10;
	}
	return res;
}
int main(){
	int t;
	int n;
	scand(t);{
		while (t--){
			scand(n);
			for (int i=(int)pow(10, n-1); i<=(int)pow(10,n)-1; i++){
				if (great(i)) printd(i);
			}
			linedown;	
		}
	}
}

