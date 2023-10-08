#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster()
	int t; cin >> t;
	while (t--){
		int n, x; cin >> n >> x;
		vector<int> f(1000000, 0);
		for (int i=0; i<n; i++){
			int r; cin >> r;
			f[r]++;
		}
		if (f[x]!=0) cout << f[x] << endl; else cout << -1 << endl;
	}
}
