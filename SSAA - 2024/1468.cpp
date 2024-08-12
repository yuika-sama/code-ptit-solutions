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
	string s; cin >> s;
	int n = s.sz;
	if (s[0] == '0'){
		cout << 0;
		return;
	}
	int f[n+1] = {};
	f[0] = f[1] = 1;
	for (int i=2; i<=n; i++){
		f[i] = 0;
		if (s[i-1] > '0'){
			f[i] = f[i-1];
		}
		if (s[i-2] == '1' or (s[i-2] == '2' and s[i-1] < '7')){
			f[i] += f[i-2];
		}
	}
	cout << f[n];
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