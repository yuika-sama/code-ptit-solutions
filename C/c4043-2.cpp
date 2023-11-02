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
				long long temp = (long long)sqrt(a[i] + a[j]);
				if (a[i] + a[j] == temp*temp){
					for (int k=j+1; k<n; k++){
						if (a[i] + a[j] == a[k]){
							check = true;
							break;
						}
					}
					//if(check)break;
				}
				//if (check) break;
			}
			//if (check) break;
		}
		if (check) printf("YES\n"); else printf("NO\n");
	}
}
