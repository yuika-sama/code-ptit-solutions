#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define linedown cout << '\n';
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster();
	int n; cin >> n;
	long long x = 1, t=1;
	for (int i=2; i<=n; i++){
		t = t*i;
		x = x+t;
	}
	cout << x;
}
