#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		vector<int> f(1e7, 0);
		int mx = -1, mn = INT_MAX;
		for (int i=0; i<n-1; i++){
			int r; cin >> r;
			f[r]++;
			mx = max(mx, r);
			mn = min(mn, r);
		}
		for (int i = mn; i<=mx; i++){
			if (f[i] == 0){
				cout << i << endl;
				break;
			}
		}
	}
}
