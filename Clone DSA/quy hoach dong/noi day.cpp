#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n';
#define precision(x)  setprecision(x) << fixed
#define clrscr() system("cls");
#define ll long long
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		priority_queue<ll, vector<ll>, greater<ll>> a;
		for (int i=0; i<n; i++){
			ll x;
			cin >> x;
			a.push(x);
		}
		ll cost = 0;
		while (a.size() > 1){
			ll x = a.top(); a.pop();
			ll y = a.top(); a.pop();
			a.push(x+y);
			cost += (x+y);
		}
		cout << cost << endl;
	}
}