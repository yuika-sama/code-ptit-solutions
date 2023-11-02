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
		printf("Test %d\n", temp - t);
		for (int i=0; i<n; i++){
			scand(a[i]);
			b[a[i]]++;
		}
		for (int i=0; i<n; i++){
			if (b[a[i]]>=1){
				printf("%d xuat hien %d lan\n", a[i], b[a[i]]);
				b[a[i]] = 0;
			}
		}
	}
}
