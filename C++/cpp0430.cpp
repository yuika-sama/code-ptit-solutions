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
		set<int> s;
		int mx = -1, mn = 9999;
		for (int i=0; i<n; i++){
			int x; cin >> x;
			s.insert(x);
			mx = max(mx, x);
			mn = min(mn, x);
		}
		cout << mx - mn + 1 - s.size() << endl;
	}
}
