#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define pi pair<int, int>
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
void merge(int a[], int l, int m, int r){
	int i, j, k;
	int n1 = m-l+1; //left side's length
	int n2 = r-m; //righ side's length
	int L[n1], R[n2];
	for (int i=0; i<n1; i++){
		L[i] = a[i+l];
	}
	for (int i=0; i<n2; i++){
		R[i] = a[i+m+1];
	}
	i=j=0, k = l;
	while (i<n1 and j<n2){
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
void merge_sort(int a[], int l, int r){
	if (l<r){
		int m = (l+r)/2;
		merge_sort(a, l, m);
		merge_sort(a, m+1, r);
		merge(a, l, m, r);
	}
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		int a[n+5];
		for (int i=0; i<n; i++) cin >> a[i];
		merge_sort(a, 0, n-1);
		for (int i=0; i<n; i++) cout << a[i] << ' ';
		cout << endl;
	}
}