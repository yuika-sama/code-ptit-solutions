#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scand(n) scanf("%d",&n)
#define scand2(m,n) scanf("%d%d", &m, &n);
#define scanld(n) scanf("%ld", &n)
#define printd(n) printf("%d\n" , n)
#define printld(n) printf("%ld\n", n)
#define linedown printf("\n")
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))
main(){
	int t;
	scand(t);
	int n, a[50];
	while (t--){
		scand(n);
		for (int i=0; i<n; i++) scand(a[i]);
		int d=0;
		for (int i=0; i<n; i++){
			for (int j=0; j<i; j++){
				if(a[j] > a[i])
				{
					d--;
					break;
				}
			}
			d++;
		}
		printd(d);
	}
}
