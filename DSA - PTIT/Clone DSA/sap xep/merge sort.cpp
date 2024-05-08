#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
void merge(int a[], int l, int m, int r){
	int i,j,k;
	int n1 = m-l+1;
	int n2 = r-m;
	int L[n1],R[n2];
	for (i=0; i<n1; i++){
		L[i] = a[l+i];
	}
	for (j=0; j<n2; j++){
		R[j] = a[m+j+1];
	}
	i = 0; j = 0; k = l;
	while(i<n1 and j<n2){
		if (L[i] <= R[j]){
			a[k++] = L[i++];
		} else {
			a[k++] = R[j++];
		}
	}
	while (i<n1){
		a[k++] = L[i++];
	}
	while (j<n2){
		a[k++] = R[j++];
	}
}
void mergeSort(int a[], int l, int r){
	if (l<r){
		int m = (l+r)/2;
		mergeSort(a, l, m);
		mergeSort(a, m+1, r);
		merge(a, l, m, r);
	}
}
main(){
	int a[] = {7,2,3,1,9,2,2,3,0,5,6,4,2,4,6,8,9,8,5};
	int n = 19;
	mergeSort(a, 0, n-1);
	for (int i = 0; i<n; i++){
		cout << a[i] << ' ';
	}
}