#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		int a[n], b[n];
		for (int i=0; i<n; i++){
			cin >> a[i];
		}
		b[0] = a[0] * a[1];
		b[n-1] = a[n-1] * a[n-2];
		for (int i=1; i<n-1; i++){
			b[i] = a[i-1] * a[i+1];
		}
		for (auto x:b){
			cout << x << ' ';
		}
		cout << endl;
	}
}