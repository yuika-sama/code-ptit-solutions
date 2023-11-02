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
		int a[n+5][n+5];
		vector<int> f(1e5+5, 0);
		int d = 0;
		for (int i=0; i<n; i++){
			set<int> s;
			for (int j=0; j<n; j++){
				cin >> a[i][j];
				s.insert(a[i][j]);
			}
			set<int>::iterator it;
			for (it = s.begin(); it!=s.end(); it++){
				f[*it]++;
			}
		}
		for (int i=0; i<n; i++){
			for (int j=0; j<n; j++){
				if (f[a[i][j]] == n){
					d++;
					f[a[i][j]] = 0;
				}
			}
		}
		cout << d;
		cout << endl;
	}
}