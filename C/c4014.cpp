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
	int a[100];
	int b[100005] = {0};
	for (int i=0; i<n; i++){
		scand(a[i]);
		b[a[i]]++;
	}
	for (int i=0; i<n; i++)
	if (b[a[i]]!=0){
		printd(a[i]); printd(b[a[i]]);
		linedown;
		b[a[i]] = 0;
	}
	
	
}
