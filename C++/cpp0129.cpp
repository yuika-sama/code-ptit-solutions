#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n, p; cin >> n >> p;
		if (n<p) cout << 0; else {
			int cnt = 0;
			for (int i=2; i<=n; i++){
				int tmp = i;
				while (tmp%p==0){
					cnt++;
					tmp/=p;
				}
			}
			cout << cnt;
		}
		cout << endl;
	}
}
