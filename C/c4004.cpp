#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scand(n) scanf("%d",&n)
#define scand2(m,n) scanf("%d%d", &m, &n);
#define scanld(n) scanf("%ld", &n)
#define printd(n) printf("%lld ", n)
#define printld(n) printf("%ld\n", n)
#define linedown printf("\n")
main(){
	int t;
	scand(t);
	int n;
	while (t--){
		scand(n);
		long long int a[n];
		a[0] = 0;
		a[1] = 1;
		for (long long int i=2; i<=n; i++){
			a[i] = a[i-1] + a[i-2];
		}
		printd(a[n]);
		linedown;
	}
}
