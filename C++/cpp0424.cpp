#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n, k; cin >> n >> k;
		vector<int> a;
		for (int i=0; i<k; i++){
			for (int j=0; j<n; j++){
				int x; cin >> x;
				a.push_back(x);
			}
		}
		sort(a.begin(), a.end());
		for (int i=0; i<a.size(); i++){
			cout << a[i] << ' ';
		}
		cout << endl;
	}
}
