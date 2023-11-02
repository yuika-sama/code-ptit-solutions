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
		long long a[n+5];
		for (int i=0; i<n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		long long res = INT_MAX;
		for (int i=1; i<n; i++){
			res = min(res, a[i] - a[i-1]);
		}
		cout << res << endl;
	}
}
