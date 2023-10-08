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
		set<int> a;
		for (int i=0; i<n; i++){
			int r; cin >> r;
			a.insert(r);
		}
		set<int>::iterator s;
		if (a.size() == 1) cout << -1 << endl; else{
			s = a.begin();
			cout << *s << ' ';
			s++;
			cout << *s << endl;
		}
	}
}
