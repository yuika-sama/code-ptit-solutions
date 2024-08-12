#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define linedown cout << '\n';
using namespace std;
const long long c = 1e9+7;
main(){
	int t; cin >> t;
	while (t--){
		int n, k; cin >> n >> k;
		vector<long long> f(1e5+1, 0);
		long long sum = 0;
		for (int i=1; i<=k; i++){
			f[i] = (sum%c+1%c)%c;
			sum = (sum%c+f[i]%c)%c;
		}
		for (int i = k+1; i<=n; i++){
			for (int j=1; j<=k; j++){
				f[i] = (f[i]%c+f[i-j]%c)%c;
			}
		}
		cout << f[n];
		linedown;
	}
}
