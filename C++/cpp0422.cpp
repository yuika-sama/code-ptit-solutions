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
		vector<long long> res;
		int d = 0;
		for (int i=0; i<n; i++){
			long long x; cin >> x;
			if (x!=0) res.push_back(x); else d++;
		}
		for (int i=0; i<res.size(); i++) cout << res[i] << ' ';
		for (int i=0; i<d; i++) cout << 0 << ' ';
		cout << endl;
	}
}
