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
	int n; cin >> n;
	vector<pair<ll, ll>> v(n+1);
	for (int i=1; i<=n; i++){
		cin >> v[i].fi >> v[i].sc;
	}
	ll dp[n+5][6];
	for (int i=0; i<=n; i++){
		for (int j=0; j<=2; j++){
			dp[i][j] = LLONG_MAX;
		}
	}
	dp[0][0] = 0;
	for (int i=0; i<=2; i++){
		dp[1][i] = i * v[1].sc;
	}
	for (int i=2; i<=n; i++){
		for (int j=0; j<=2; j++){
			for (int k=0; k<=2; k++){
				if (v[i-1].fi + k != v[i].fi + j){
					dp[i][j] = min(dp[i][j], dp[i-1][k] + v[i].sc * j);
				}
			}
		}
	}
	ll res = LLONG_MAX;
	for (int j=0; j<=2; j++){
		res = min(res, dp[n][j]);
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