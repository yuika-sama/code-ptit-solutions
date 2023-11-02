#include<stdio.h>
#include<math.h>
#include<string.h>
#define scand(n) scanf("%d",&n)
#define scand2(m,n) scanf("%d%d", &m, &n);
#define scanld(n) scanf("%ld", &n)
#define printd(n) printf("%d", n)
#define printld(n) printf("%ld\n", n)
#define linedown printf("\n")
#define printc(n) printf("%c", n+96)
#define printC(n) printf("%c", n+64)
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
main(){
	int m,n;
	scand2(m,n);
	int a;
	int t;
	for (int i=0; i<m; i++){
		if (i>n){
			for (int k = i-1; k>0; k--){
			printC(t);
		}
		linedown;
		}else{
			a = 0;
		for (int j=i; j<n; j++){
			printC(j);
			t = j;
		}
		for (int k = i; k>0; k--){
			printC(t);
		}
		linedown;
		}
		}	
	}
