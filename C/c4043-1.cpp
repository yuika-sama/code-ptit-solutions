#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define scan(n) scanf("%d",&n)
#define print(n) printf("%lld\n" , n)
#define linedown printf("\n")
int binary_search(long long int a[], int l, int r, long long int x){
	while (l!=r){
		int mid = (r-l)/2;
		if (a[mid] == x) return mid;
		if (a[mid]<x) l = mid+1; else r = mid-1;
	}
	return -1;
}
int sosanh(const void *a, const void *b){
	return (*(int*)a - *(int*)b);
}
main(){
	int t;
	scan(t);
	while (t--){
		int n;
		scan(n);
		long int a[n];
		for (int i=0; i<n; i++){
			scanf("%ld", &a[i]);
			a[i] = a[i]*a[i];
		}
		qsort(a,n,sizeof(int),sosanh);
		bool check = false;
		for (int i=n-1; i>=2; i--){
			int left = 0, right = i-1;
			while (left<right){
				if (a[left]+a[right] ==a[i]){
					check = true;
				}
				else if (a[left]+a[right] < a[i]) left++;
				else right--;
			}
		}
		if (check) printf("YES\n"); else printf("NO\n");
	}
}
