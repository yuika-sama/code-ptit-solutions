#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
main(){
	int n;
	scan(n);
	int m;
	scan(m);
	int k;
	scan(k);
	int a[1000];
	for (int i=0; i<m; i++){
		scan(a[i]);
	}
	bool x[1000] = {0};
	for (int i=0; i<m; i++){
		for (int j=a[i]; j<=a[i]+k && j<=n; j++){
			x[j] = true;
		}
		for (int j=a[i]; j>=a[i]-k && j>0; j--){
			x[j] = true;
		}
	}
	int d = 0, i=1;
	while (i<=n){//duyet het tuyen duong
		if (x[i] == false){//neu chua chieu sang
			d++;//lap them bong den o vi tri i+k
			i += 2*k + 1;//bo qua 2*k+1 vi nhung vi tri do da dc chieu sang
		} else i++; //kiem tra tiep
	}
	print(d);
}
