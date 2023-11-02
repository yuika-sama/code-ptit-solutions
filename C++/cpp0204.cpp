#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster();
	bool f[100005];
	memset(f, true, sizeof(f));
	f[0] = f[1] = 0;
	for (int i=2; i<=sqrt(100000); i++){
		if (f[i] == true){
			for (int j = i*i; j<=100000; j+=i){
				f[j] = false;
			}
		}
	}
	int t; cin >> t;
	while (t--){
		int l, r; cin >> l >> r;
		int d = 0;
		for (int i = l; i<=r; i++){
			if (f[i] == true){
				d++;
			}
		}
		cout << d << endl;
	}
}
