	#include <stdio.h>
	#include <stdbool.h>
	
	void solve(int a[100], int n, int x){
		int i=0;
		int b[1000000] = {0};
		while (i<n){
			b[a[i]]++;
			i++;
		}
		bool check = false;
		while (i<n){
			if (a[i]<x && b[a[i]]!=0) {
				printf("%d ", i+1);
				b[a[i]]==0;
				check = true;
			}
			i++;	
		}
		if (!check) printf("-1");
		printf("\n");		
}
	int main(){
		int t;
		scanf("%d", &t);
		while (t--){
			int n, x;
			scanf("%d%d", &n, &x);
			int i=0;
			int a[100];
			while (i<n){
				scanf("%d", &a[i]);
			}
		solve(a, n, x);
			
	 	}
	 	return 0;
	}
