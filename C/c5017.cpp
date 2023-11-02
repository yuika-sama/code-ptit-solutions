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
	int t;
	scan(t);
	while (t--){
		int m,n;
		scan(m); scan(n);
		int a[100][100];
		for (int i=0; i<m; i++){
			for (int j=0; j<n; j++){
				scan(a[i][j]);
			}
		}
		int c1=0, c2=n-1, h1=0, h2=m-1, pos = 0;
		while (c1<=c2 && h1<=h2 && pos<=n*m){
			for (int i=c1; i<=c2; i++){
				print(a[h1][i]);
				pos++;
			}
			if (pos == n*m) break;
			h1++;
			for (int i=h1; i<=h2; i++){
				print(a[i][c2]);
				pos++;
			}
			if (pos == n*m) break;
			c2--;
			if (c1<=c2){
				for (int i=c2; i>=c1; i--){
					print(a[h2][i]);
					pos++;
				}
				if (pos == n*m) break;
				h2--;
			}
			if (h1<=h2){
				for (int i = h2; i>=h1; i--){
					print(a[i][c1]);
					pos++;
				}
				if (pos == n*m) break;
				c1++;
			}
		}
		linedown;
	}
}

