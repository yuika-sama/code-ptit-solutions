#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster();
	long long f[93];
	f[0] = 1;
	f[1] = 1;
	for (int i=2; i<92; i++){
		f[i] = f[i-1]+f[i-2];
	}
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		cout << f[n-1] << endl;
	}
}
