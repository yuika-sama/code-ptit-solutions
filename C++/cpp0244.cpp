#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define linedown cout << '\n';
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	int n; cin >> n;
	int f[1005] = {0};
	for (int i=0; i<n; i++){
		int x; cin >> x;
		f[x]++;
	}
	for (int i=0; i<1005; i++){
		if (f[i]!=0) cout << i << ' ';
	}
}
