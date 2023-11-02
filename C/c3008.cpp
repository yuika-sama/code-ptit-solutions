#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scand(n) scanf("%d",&n)
#define printd(n) printf("%d ", n)
main(){
	int n;
	scand(n);
	long int a[5] = {6, 28, 496, 8128, 33550336};
	for (int i=0; i<=4; i++){
		if (a[i]<=n) printd(a[i]);
	}
}
