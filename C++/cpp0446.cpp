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
		int res = 0;
		int mn = INT_MAX;
		int a[n+5];
		for (int i=0; i<n; i++) cin >> a[i];
		for (int i=0; i<n-1; i++){
			for (int j=i+1; j<n; j++){
				if (abs(a[i] + a[j]) < mn){
					mn = abs(a[i] + a[j]);
					res = a[i] + a[j];
				}
			}
		}
		cout << res << endl;
	}
}
