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
main(){
	int m,n;
	scand2(m,n);
	long int a[5] = {6, 28, 496, 8128, 33550336};
	for (int i=0; i<=4; i++){
		if (a[i]<=max(m,n) && a[i]>=min(m,n)) printd(a[i]);
	}
}
