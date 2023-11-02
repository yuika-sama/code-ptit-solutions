#include <bits/stdc++.h>
#define fast() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	fast();
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		vector<bool> v(n, 0);
		for (int i=0; i<n; i++){
			long long x; cin >> x;
			if (x<0 || x>=n) continue;
			v[x] = 1;
		}
		for (int i=0; i<n; i++){
			if (v[i]) cout << i << ' '; else cout << -1 << ' ';
		}
		cout << endl;
	}
}
