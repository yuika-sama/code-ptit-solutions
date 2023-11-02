#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
#define scan(n) scanf("%ld",&n)
#define print(n) printf("%d " , n)
#define linedown printf("\n")
void swing(long long *a, long long *b){
	long long int temp = *a;
	*a = *b;
	*b = temp;
}
main(){
	int t;
	scan(t);
	while (t--){
		int n;
		scan(n);
		long long a[5000];
		for (int i=0; i<n; i++){
			scan(a[i]);
			a[i]*=a[i];
		}
		bool check = false;
		for (int i=0; i<n-2; i++){
			for (int j=i+1; j<n-1; j++){
				long long x = (long long)sqrt(a[i]+a[j]);
				if (x*x == a[i] + a[j]){
					for (int k=j+1; k<n; k++){
						if (a[j] + a[i] == a[k]){
							check = true;
							break;
						}
					}
				}
				if (check) break;
			}
			if (check) break;
		}
		if (check) printf("YES\n"); else printf("NO\n");
	}
}
