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
bool palin(int a[100], int n){
	bool check = true;
	for (int i=0; i<n; i++){
		if (a[i]!=a[n-i-1]){
			check = false;
			break;
		}
	}
	return check;
}
main(){
	int t;
	scand(t);
	int n,a[100];
	while (t--){
		scand(n);
		for (int i=0; i<n; i++){
			scand(a[i]);
		}
		if (palin(a,n)) printf("YES\n"); else printf("NO\n");
	}
}
