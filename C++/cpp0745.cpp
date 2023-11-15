#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
const long long c = 1e9+7;
main(){
	faster();
	unsigned long long int f[1005];
	f[1] = f[2] = 1;
	f[0] = 0;
	for (int i=3; i<=1000; i++){
		f[i] = (f[i-1]%c + f[i-2]%c)%c;
	}
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		cout << f[n] << endl;
	}
}