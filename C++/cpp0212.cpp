#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
const long long c = 1e9+7;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n, x; cin >> n >> x;
		int a[n+5];
		for (int i=0; i<n; i++) cin >> a[i];
		reverse(a, a+n); //tai sao phai reverse dcm troll ak?
		long long res = 0;
		long long m = 1;
		for (int i=0; i<n; i++){
			res = (res + m * a[i])%c;
			m = m*x%c;
		}
		cout << res << endl;
	}
}
