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
ll d[105][105];

void solve(){
	/*hav fun with coding*/
	int n, m; cin >> n >> m;
	if (n>m) swap(m, n);
	ll tong = 0;
	for(int i=0; i<=m; i++){
		tong = (tong + d[n-1][i] * d[m+1][i+1]) % oo;
	}
	cout << tong;
}
main(){
	faster();
	int T = 1;
	for (int i=0; i<=101; i++){
		for (int j=0; j<=min(i, 101); j++){
			if (j == 0 or j == i){
				d[i][j] = 1;
			} else {
				d[i][j] = (d[i-1][j-1] + d[i-1][j])%oo;
			}
		}
	}
	cin >> T;
	while (T--){
		solve();
		cout << endl;
	}
	cerr << "Time elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
	return 0;
}