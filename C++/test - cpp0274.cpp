#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		int a[n+5], f[1000005] = {0};
		int mn = INT_MAX, mx = -1;
		for (int i=0; i<n; i++){
			cin >> a[i];
			f[a[i]]++;
			mn = min(mn, a[i]);
			mx = max(mx, a[i]);
		}
		long long d = 0;
		for (int i=mn; i<=mx; i++){
			if (f[i]>=2){
				d+=f[i];
			}
		}
		cout << d << endl;
	} 
}