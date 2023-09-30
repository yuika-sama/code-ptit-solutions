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
		long long a, b;
		cin >> a >> b;
		long double x, y;
		y = (long double)(2*b - a) / 3;
		x = (long double)(a-y)/2;
		if (x==trunc(x) && y == trunc(y) &&  x>=0 && y>=0){
			cout << "YES" << endl;
		} else cout << "NO" << endl;
	}
}