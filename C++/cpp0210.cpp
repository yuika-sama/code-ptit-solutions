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
		int a[n+5];
		for (int i=0; i<n; i++) cin >> a[i];
		int mx = -1;
		for (int i=0; i<n-1; i++){
			for (int j=i+1; j<n; j++){
				if (a[j] > a[i]){
					mx = max(mx, a[j] - a[i]);
				}
			}
		}
		cout << mx << endl;
	}
}
