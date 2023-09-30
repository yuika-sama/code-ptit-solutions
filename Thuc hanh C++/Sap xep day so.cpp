#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define pb push_back
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		long long m, a, Max = -9999999999; cin >> m;
		vector<long long> negative, positive;
		for (int i=0; i<n; i++){
			cin >> a;
			if (a < 0) negative.pb(a); else positive.pb(a);
			Max = max(Max, a);
		}
		bool check = false;
		for (auto x:negative){
			if (x == Max && check == false){
				cout << m << ' ' << x << ' ';
				check = true;
			} else 
			cout << x << ' ';
		}
		for (auto x:positive){
			if (x == Max && check == false){
				cout << m << ' ' << x << ' ';
				check = true;
			} else 
			cout << x << ' ';
		}
		cout << endl;
	}
}