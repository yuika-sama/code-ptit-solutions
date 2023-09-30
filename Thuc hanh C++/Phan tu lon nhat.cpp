#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define pb push_back
#define ll long long
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n, k; cin >> n >> k;
		int a[n+5];
		for (int i=0; i<n; i++) cin >> a[i];
		sort(a, a+n);
		reverse(a, a+n);
		for (int i=0; i<k; i++) cout << a[i] << ' ';
		cout << endl;
	}
}