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
	int x;
	//for (int i=0; i<n; i++) scand(a[i]);
	int b[100005] = {0};
	int a[100];
	int mn=99999, mx=-1;
	for (int i=0; i<n; i++){
		scand(a[i]);
		b[a[i]]++;
	}
	int d=0;n
	for (int i=0; i<n; i++)
	if (b[a[i]]==1){
		d++;
		b[a[i]] = -5;
	}
	printd(d); linedown;
	for (int i=0; i<n; i++)
	if (b[a[i]]==-5){
		printd(a[i]);
		b[a[i]] = 0;
	}
}
