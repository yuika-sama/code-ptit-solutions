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
		deque<ll> dq, dq1;
		ll x;
		for (int i=0; i<n; ++i){
			cin >> x;
			dq.pb(x);
			dq1.pb(x);
		}
		sort(dq1.begin(), dq1.end());
		for (int i=0; i<n; i++){
			if (dq == dq1){
				cout << i << ' ';
				break;
			}
			x = dq1.back();
			dq1.pop_back();
			dq1.push_front(x);
		}
		cout << endl;
	}
}