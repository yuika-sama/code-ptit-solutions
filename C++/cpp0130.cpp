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
		while (n%2==0) {
			cout << 2 << ' ';
			n/=2;
		}
		for (int i=2; i<=sqrt(n); i++){
			while (n%i==0){
				cout << i << ' ';
				n/=i;
			}
		}
		if (n>1) cout << n;
		cout << endl;
	}
}
