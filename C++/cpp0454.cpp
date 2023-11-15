#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
//int search(long long a[], int l, int r, long long x){
//	int m = (l+r)/2;
//	if (a[m] == x) return m;
//	else if (a[m] > x) return search(a, l, m-1, x);
//	else if (a[m] < x)return search(a, m+1, r, x);
//	else if (m == r) return -1;
//}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		long long a[n+5];
		for (int i=0; i<n; i++){
			cin >> a[i];
			a[i] *= a[i];
		}
		bool check = false;
		sort(a, a+n);
		for (int i=0; i<n-1; i++){
			for (int j=i+1; j<n; j++){
				if (binary_search(a, a+n, a[i] + a[j])){
					check = true;
					break;
				}
			}
		}
		if (check) cout << "YES" << endl; else cout << "NO" << endl;
	}
}