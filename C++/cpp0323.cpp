#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		string n; cin >> n;
		long long m; cin >> m;
		long long k = 0;
		for (int i=0; i<n.size(); i++){
			k = k*10 + (n[i] - '0');
			k%=m;
		}
		cout << k << endl;
	}
}