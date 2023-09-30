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
		int a[n+5], f[n+5] = {};
		for (int i=0; i<n; i++){
			cin >> a[i];
		}
//		memset(f, 1, sizeof(f));
		int res = 0;
		for (int i=0; i<n; i++){
			f[i] = 1;
			for (int j=0; j<i; j++){
				if (a[j] < a[i]){
					f[i] = max(f[j]+1, f[i]);
				}
			}
			res = max(res, f[i]);
		}
		cout << res << endl;
	}
}