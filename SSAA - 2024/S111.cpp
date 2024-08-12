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
ll n;
pair<ll, ll> a;
set<pair<ll, ll> > st[100005];
bool cmp(pair<ll, ll> a, pair<ll, ll> b){
	return a.fi < b.fi and a.sc < b.sc;
}
bool check(set<pair<ll, ll>>& s){
	for (auto x:s){
		if (cmp(x, a)) return true;
		else if (x.fi >= a.fi) break;
	}
	return false;
}
ll bs(ll l, ll r){
	while (l<r){
		ll m = (l+r)/2;
		if (check(st[m])){
			l = m+1;
		} else r = m;
	}
	return l;
}
void solve(){
	/*hav fun with coding*/
	cin >> n;
	for (ll i =0 ; i<n; i++){
		cin >> a.fi >> a.sc;
		ll id = bs(0, n);
		if (id < n){
			set<pair<ll, ll>>::iterator it = ++st[id].insert(a).fi;
			while (it != st[id].end()){
				if (cmp(a, *it)){
					st[id].erase(it++);
				} else it++;
			}
		}
	}
	ll res =0 ;
	while (res < n and !st[res].empty()){
		res++;
	}
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