#include <bits/stdc++.h>
#define fast() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	fast();
	int t; cin >> t;
	while (t--){
		int n, m; cin >> n >> m;
		long long a[n+5], b[m+5];
		for (int i=0; i<n; i++) cin >> a[i];
		for (int i=0; i<m; i++) cin >> b[i];
		cout << *max_element(a, a+n) * *min_element(b, b+m) << endl;
	}
}
