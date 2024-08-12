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
ll count(ll  n, ll p){
	ll cnt = 0;
	while (n>=p){
		cnt += n/p;
		n/=p;
	}
	return cnt;
}

void solve(){
	/*hav fun with coding*/
	ll n, k;
	cin >> n >> k;
	vector<pair<ll, int>> v;
	for (ll d = 2; d*d<=k; d++){
		if(k%d==0){
			int cnt = 0;
			while (k%d==0){
				k/=d;
				cnt++;
			}		
			v.pb({d, cnt});	
		}
	}
	if (k>1) v.pb({k, 1});
	ll res = 1e18;
	for (auto i:v){
		ll p = i.fi;
		int e = i.sc;
		ll cnt = count(n, p);
		res = min(res, cnt/e);
	}
	cout << res;
}
main(){
	faster();
	int T = 1;
	cin >> T;
	while (T--){
		solve();
		cout << endl;
	}
	cerr << "Time elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
	return 0;
}