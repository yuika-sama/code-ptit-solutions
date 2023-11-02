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
int C(int k, int n) {
 if (k == 0 || k == n) return 1;
 if (k == 1) return n;
 return C(k - 1, n - 1) + C(k, n - 1);
}
main(){
	int n;
	scand(n);
	for (int i=0; i<n; i++){
		for (int j=0; j<=i; j++){
			printd(C(j,i));
		}
		linedown;
	}
}
