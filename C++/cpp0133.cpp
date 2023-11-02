#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	bool f[10000+5];
	memset(f, true, sizeof(f));
	f[0] = false; f[1] = false;
	for (int i=2; i<=sqrt(10000); i++){
		if (f[i] == true){
			for (int j = i*i; j<=10000; j+=i){
				f[j] = false;
			}
		}
	}
	faster();
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		for (int i=2; i<=n; i++){
			if (f[i] == true){
				cout << i << ' ';
			}
		}
		cout << endl;
	}
}
