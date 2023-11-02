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
	int t;
	scand(t);
	while(t--){
		int n;
		scand(n);
		int a[1000];
		for (int i=0; i<n; i++) scand(a[i]);
		
		for (int i=0; i<n-1; i++){
			bool check = true;
			for (int j=i+1; j<n; j++){
				if (a[i]<=a[j]){
					check = false;
					break;
				}
			}
			if (check) printd(a[i]);
		}
		printd(a[n-1]); linedown;
	}
}
