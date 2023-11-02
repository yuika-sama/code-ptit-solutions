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
	int t;
	scand(t);
	int a[100], b[100005] = {0};
	int n;
	int temp = t;
	while (t--){
		scand(n);
		int mn=99999, mx=-1;
		printf("Test %d:\n", temp - t);
		for (int i=0; i<n; i++){
			scand(a[i]);
			if (isprime(a[i])) {
				b[a[i]]++;
				mn = min(mn, a[i]);
				mx = max(mx, a[i]);
		}
		}
		for (int i=mn; i<=mx; i++){
			if (b[i]!=0){
				//printd(i);linedown;
				printf("%d xuat hien %d lan\n", i, b[i]);
				b[i] = 0;
			}
		}
}
}
