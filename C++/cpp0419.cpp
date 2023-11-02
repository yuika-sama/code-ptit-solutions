#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster()
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		int a[n+5], b[n+5];
//		vector<int> v;
		set<int> v;
		vector<int> p(1e5+5, 0);
		for (int i=0; i<n; i++){
			cin >> a[i];
			v.insert(a[i]);
			p[a[i]]++;
		}
		for (int i=0; i<m; i++){
			cin >> b[i];
			v.insert(b[i]);
			p[b[i]]++;
		}
		for (auto& x:v) {
			cout << x << ' ';
		}
		cout << endl;
		for (auto& x:v){
			if (p[x] == 2) cout << x << ' ';
		}
		cout << endl;
	}
}
