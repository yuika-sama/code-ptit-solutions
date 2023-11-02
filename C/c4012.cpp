#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scand(n) scanf("%d",&n)
#define scand2(m,n) scanf("%d%d", &m, &n);
#define scanld(n) scanf("%ld", &n)
#define printd(n) printf("%d " , n)
#define printld(n) printf("%ld\n", n)
#define linedown printf("\n")
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))
main(){
	int n; scand(n);
	int mx, mn;
	int a[100000];
	memset(a, 0, sizeof(a));
	int x;
	while (n--){
		scand(x);
		mx=max(x, mx); mn=min(x,mn);
		a[x]++;
	}
	bool check = false;
	for (int i=mn; i<mx; i++){
		if (a[i]>1) 
		{
			printd(i);
			check = true;
		}
	}
	if (!check) printf("0");
}

