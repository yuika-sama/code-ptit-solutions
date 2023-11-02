#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
bool prime(int n){
	if (n<2) return false; else
	if (n==2) return true; else
	if (n%2==0) return false; else
	for (int i=3; i<=sqrt(n); i++){
		if (n%i==0){
			return false;
		}
	}
	return true;
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		long long l, r; cin >> l >> r;
		int d = 0;
		for (int i = sqrt(l); i<=sqrt(r); i++){
			if (prime(i)) d++;
		}
		cout << d << endl;
	}
}
