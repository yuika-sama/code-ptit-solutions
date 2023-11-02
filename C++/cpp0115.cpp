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
		int f[10000] = {0};
		int t = n;
		int mn = INT_MAX, mx = -mn;
		for (int i=2; i<=n; i++){
			while (t%i==0){
				t/=i;
				f[i]++;
				mn = min(mn, i);
				mx = max(mx, i);
			}
		}
		for (int i=mn; i<=mx; i++){
			if (f[i]>0){
				cout << i << " " << f[i] << " ";
			}
		}
		cout << endl;
		
	}
}
