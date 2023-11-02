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
	int a[9];
	for (int i=1; i<=8; i++) scand(a[i]);
	int x1, x2, y1, y2;
	x1 = max(a[1], max(a[3], max(a[5], a[7])));
	y1 = min(a[2], min(a[4], min(a[6], a[8])));
	x2 = min(a[1], min(a[3], min(a[5], a[7])));
	y2 = max(a[2], max(a[4], max(a[6], a[8])));
	
	int cd = abs(max(x1,x2) - min(x1,x2)), cr = abs(max(y1,y2) - min(y1,y2));
	printd(max(cd, cr)*max(cr,cd));
}
