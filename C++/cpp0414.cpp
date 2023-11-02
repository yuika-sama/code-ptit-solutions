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
		set<int> res;
		for (int i=0; i<n; i++){
			long long x; cin >> x;
			while (x>0){
				int tmp = x%10;
				res.insert(tmp);
				x/=10;
			}
		}
		for (auto i : res) cout << i << ' ';
		cout << endl;
	}
}
