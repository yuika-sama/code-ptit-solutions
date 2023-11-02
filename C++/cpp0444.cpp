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
		long long x; cin >> x;
		bool check = false;
		for (int i=1; i<=n; i++){
			long long r;
			cin >> r;
			if (r == x && !check){
				cout << i << endl;
				check = true;
			}
		}
		if (check == false) cout << -1 << endl;
	}
}
