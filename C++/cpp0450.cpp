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
		bool check = false;
		vector<int> f(1000000, 0);
		for (int i=0; i<n; i++){
			int r; cin >> r;
			f[r]++;
			if (f[r] == 2 && !check){
				check = true;
				cout << r << endl;
			}
		}
		if (!check) cout << -1 << endl;
	}
}
