#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int m, n; cin >> m >> n;
		bool r[105] = {0}, c[105] = {0};
		for (int i=0; i<m; i++){
			for (int j=0; j<n; j++){
				int x; cin >> x;
				if (x==1){
					r[j] = 1;
					c[i] = 1;
				}
			}
		}
		for (int i=0; i<m; i++){
			for (int j=0; j<n; j++){
				if (r[j]==1 || c[i]==1){
					cout << 1 << ' ';
				} else cout << 0 << ' ';
			}
			cout << endl;
		}
	}
}
