#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
using namespace std;
main(){
	faster();
	bool f[1000005];
	memset(f, true, sizeof(f));
	f[0] = false; f[1] = false;
	for (int i=2; i<=sqrt(1000000); i++){
		if (f[i] == true){
			for (int j = i*i; j<=1000000; j+=i){
				f[j] = false;
			}
		}
	}
	int t; cin >> t;
	while (t--){
		ll n;
		cin >> n;
		int d = 0;
		for (int i=2; i<=sqrt(n); i++){
			if (f[i] == true && i*i<=n){
				d++;
			}
		}
		cout << d << endl;
	}
}
