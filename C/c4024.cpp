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
#define swap(x,y) { x = x + y; y = x - y; x = x - y; }
main(){
	int n;
	scand(n);
	int a[100];
	int t;
	for (int i=0; i<n; i++) scand(a[i]);
	
	for (int i=0; i<n-1; i++){
		for (int j=i+1; j<n; j++){
			if (a[i]<=a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	for (int i=0; i<n; i++) printd(a[i]);	
}
