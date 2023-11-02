#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scand(n) scanf("%d",&n)
#define printd(n) printf("%d " , n)
#define linedown printf("\n")
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))
main(){
	int m,n;
	scand(m); scand(n);
	if (m<=n){
		for (int i=1; i<m; i++){
			for (int j=m-i+1; j>1; j--){
				printd(j);
			}
			for (int j=1; j<n-i-1; j++){
				printd(j);
			}
			linedown;
		}
	}
}
