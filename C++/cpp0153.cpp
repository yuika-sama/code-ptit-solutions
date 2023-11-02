#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n;
		long long k;
		cin >> n >> k;
		long long s = n*(n-1)/2;
		s%=k;
		cout << s << endl;
	}
}
