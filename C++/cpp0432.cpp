#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
bool cmp(string a, string b){
	return (a+b>b+a);
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		string a[n+5];
		for (int i=0; i<n; i++) cin >> a[i];
		sort(a, a+n, cmp);
//		reverse(a, a+n);
		for (auto x:a){
			cout << x;
		}
		cout << endl;
	}
}