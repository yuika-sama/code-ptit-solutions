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
		long long b[n+5] = {INT_MIN};
		for (int i=n-1; i>=0; i--){
			b[i] = max(b[i+1], a[i]);
		}
		int res = 0;
		for (int i=0; i<n; i++){
			int l = i+1, r = n-1;
			while (l<=r){
				int m = (l+r)/2;
				if (b[m] >= a[i]){
					l = m+1;
					res = max(res, m-i);
				} else {
					r = m-1;
				}
			}
		}
		cout << res << endl;
	}
}
