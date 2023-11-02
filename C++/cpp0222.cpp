#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster()
	int t; cin >> t;
	while (t--){
		int n, m; cin >> n;
		int x;
		int f[100005] = {0};
		int mn = INT_MAX, mx = -1;
		int d = 0;
		for (int i=0; i<n; i++){
			for (int j=0; j<n; j++){
				cin >> x;
				f[x]++;
				mn = min(mn, x);
				mx = max(mx, x);
			}
			for (int j = mn; j<=mx; j++){
				if (f[j] >= 2){
					d++;
				}
			}
			memset(f, 0, sizeof(f));
			mn = INT_MAX; mx = -1;
		}
		cout << d << endl;
	}
}