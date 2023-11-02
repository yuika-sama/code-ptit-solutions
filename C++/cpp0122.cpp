#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
long long lcm(long long a, long long b){
	return a*b/(__gcd(a,b));
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		long long x=1;
		for (int i=2; i<=n; i++){
			x = lcm(i, x);
		}
		cout << x << endl;
	}
}
