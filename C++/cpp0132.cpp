#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		long long n;
		cin >> n;
		vector<long long> res;
		while (n%2==0){
			n/=2;
			res.push_back(2);
		}
		for (long long i=3; i<=sqrt(n); i+=2){
			while (n%i==0){
				n/=i;
				res.push_back(i);
			}
		}
		if (n>1) res.push_back(n);
		cout << res.back() << endl;
	}
}

