#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster()
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		int f[1000005] = {0};
		int mx=-1, mn=INT_MAX;
		for (int i=0; i<n; i++){
			int x; cin >> x;
			f[x]++;
			mx = max(mx, x);
			mn = min(mn,x);
		}
		int s = 0;
		for (int i=mn; i<=mx; i++){
			if (f[i]>=2){
				s+=f[i];
			}
		}
		cout << s << endl;
	}
}
