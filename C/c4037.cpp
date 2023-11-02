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
	int n;
	scand(n);
	int x;
	//for (int i=0; i<n; i++) scand(a[i]);
	int b[100005] = {0};
	int a[100];
	int mx=-1, mn=999999;
	for (int i=0; i<n; i++){
		scand(a[i]);
		b[a[i]]++;
		mx = max(a[i], mx); mn = min(a[i], mn);
	}
	int d=0;
	for (int i=mn; i<=mx; i++){
		if (b[i]>1) d++;
	}
	printd(d); linedown;
	for (int i=0; i<n; i++)
	if (b[a[i]]>1){
		printd(a[i]);
		b[a[i]] = 0;
	}
}
