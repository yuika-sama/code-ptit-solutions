#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d ", n)
#define linedown printf("\n")
int main(){
	int n;
	scan(n);
	int m;
	scan(m);
	int k;
	scan(k);
	int a[m];
	for (int i=0; i<m; i++) scan(a[i]);
	int b[2000] = {0};
	for (int i=0; i<m; i++){
		for (int j=a[i]; j<=a[i]+k+1; j++) {
			b[j] = 1;
			b[a[i]-j+1] = 1;
		}
	//	for (int j=a[i]; j>=a[i]-k-1; j--) b[j] = 1;
	}
	int d=0;
	for (int i=0; i<n; i++) //print(b[i]);
		if (b[i]==0) d++;
	if (d==0) print(0); else if (2*k>=d) printf("1"); else print(d/(2*k)+1);
}
