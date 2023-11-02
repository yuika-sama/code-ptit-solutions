#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	int t; cin >> t;
	while (t--){
		double xa,ya,xb,yb;
		cin >> xa >> ya >> xb >>yb;
		double x = xb-xa, y = yb-ya;
		cout << precision(4) << sqrt(x*x + y*y);
		cout << endl;
	}
}
