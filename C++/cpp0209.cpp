#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n, q; cin >> n >> q;
		int a[n+5];
		for (int i=0; i<n; i++) cin >> a[i];
		for (int i=0; i<q; i++){
			int l, r; cin >> l >> r;
			cout << accumulate(a+l-1, a+r, 0) << endl;
		}
		cout << endl;
	}
}
