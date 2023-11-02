#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	//tu tuong dem pham phoi
	faster()
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		vector<bool> v(n+1, 0);
		for (int i=1; i<=n; i++){
			int x; cin >> x;
			if (x>=1 && x<=n){
				v[x] = 1;
			}
		}
		bool check = false;
		for (int i=1; i<=n; i++){
			if (!v[i]){
				cout << i << endl;
				check = true;
				break;
			}
		}
		if (!check) cout << n+1 << endl;
	}
}
