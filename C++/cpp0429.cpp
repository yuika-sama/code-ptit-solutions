#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster();
	int n, k, b; cin >> n >> k >> b;	
	bool a[n+5];
	memset(a, false, sizeof(a));
	while (b--){
		int x; cin >> x;
		a[x] = true;
	}
	int x = 0;
	for (int i=1; i<=k; i++){
		if (a[i] == true){
			x++;
		}
	}
	int y = x;
	for (int i = k+1; i<=n; i++){
		x = x - a[i-k] + a[i];
		y = min(x, y);
	}
	cout << y;	
}