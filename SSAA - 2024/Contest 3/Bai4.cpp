#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O2")
#pragma GCC target("avx,avx2,fma")
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sqr(x) x*x
#define fi first
#define sc second
#define pb push_back
#define eb emplace_back
#define ins insert
#define sz size()
#define len length
#define mp make_pair
#define al(v) (v).begin(), (v).end()
#define sp << ' ' <<
#define endl '\n'
#define precision(x) setprecision(x) << fixed
#define nekonooke {cout << "Ame nara ashita wa hareru darou~"}
const int oo = 1e9+7;

//end of template


void solve(){
	/*hav fun with coding*/
	int n, k;
	cin >> n >> k;
	priority_queue<ll, vector<ll>, greater<ll>> q;
	while (n--){
		ll x;
		cin >> x;
		q.push(x);
	}
	ll res = 0;
	while (q.sz > 1){
		if (q.sz >= k){
			ll r = 0;
			int kk = k;
			ll mn = 1e18, mx = -1;
			while (kk--){
				ll x = q.top();
				r += x;
				mn = min(mn, x);
				mx = max(mx, x);
				q.pop();
			}
			q.push(r);
			res += (mx - mn);	
		} else {
			ll r = 0;
			ll mn = 1e18, mx = -1;
			while (!q.empty()){
				ll x = q.top();
				r += x;
				mn = min(mn, x);
				mx = max(mx, x);
				q.pop();
			}
			q.push(r);
			res += (mx - mn);
		}
	}
	cout << q.top() << endl;
	cout << res;
}
main(){
	faster();
	int T = 1;
	// cin >> T;
	while (T--){
		solve();
		cout << endl;
	}
	cerr << "Time elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
	return 0;
}