#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		long long n; cin >> n;
		while (n>=10){
			int x = 0, m = n;
			while (m){
				x+=m%10;
				m/=10;
			}
			n = x;
		}
		cout << n << endl;
	}
}
