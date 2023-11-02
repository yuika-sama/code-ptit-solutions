#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define linedown cout << '\n';
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster();
	int n; cin >> n;
	double x = 0;
	for (int i=1; i<=n; i++){
		x = x+(double)1/i;
	}
	cout << precision(4) << x;
}
