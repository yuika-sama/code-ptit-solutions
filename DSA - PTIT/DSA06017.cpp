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
//dung sort function cho nhanh, bay dat viet ham merge sort lam clg
void merge(vector<int> &a, int l, int m, int r){
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;
	int L[n1], R[n2];
	for (int i=0; i<n1; i++){
		L[i] = a[i + l];
	}
	for (int i=0; i<n2; i++){
		R[i] = a[i + m + 1];
	}
	i = j = 0, k = l;
	while (i<n1 and j<n2){
		if (L[i] < R[j]){
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
void merge_sort(vector<int> &a, int l, int r){
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
		int m, n; cin >> m >> n;
		vector<int> a(m);
		int x;
		for (int i=0; i<m; i++) cin >> a[i];
		for (int i=0; i<n; i++){
			cin >> x;
			a.pb(x);
		}
		merge_sort(a, 0, a.size() - 1);
		for (int i=0; i<a.size(); i++) cout << a[i] << ' ';
		cout << endl;
	}
}