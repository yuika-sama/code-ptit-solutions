#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define pi pair<int, int>
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		ll x; cin >> x;
		vector<ll> v(n+1);
		for (int i=0; i<n; i++) cin >> v[i];
		vector<ll>::iterator it = upper_bound(v.begin(), v.end(), x);
		if (it!=v.begin()){
			cout << it - v.begin() << endl;
		} else cout << -1 << endl;
	}
}