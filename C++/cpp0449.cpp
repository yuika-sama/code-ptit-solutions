#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n, x; cin >> n >> x;
		int a[n];
		vector<int> f(2e5+5, 0);
		for (int i=0; i<n; i++){
			cin >> a[i];
			f[a[i]]++;
		}
		bool check = false;
		for (int i=0; i<n; i++){
			if (f[a[i]+x]>0){
				check = true;
				break;
//				continue;
			}
		}
		if (check) cout << 1 << endl; else cout << -1 << endl;
	}
}