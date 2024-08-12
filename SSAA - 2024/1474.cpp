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
	int n; cin >> n;
	int f[s.sz + 1][30] = {};
	for (int i=1; i<=s.sz; i++){
		for (int j=0; j<=26; j++){
			f[i][j] += f[i-1][j];
		}
		f[i][s[i-1] - 'a']++;
	}
	while (n--){
		int a,b,c,d;
		cin >> a >> b >> c >> d;
		bool check = true;
		for (int j=0; j<=26; j++){
			if (f[b][j] - f[a-1][j] != f[d][j] - f[c-1][j]){
				check = false;
				break;
			}
		}
		cout << (check?"YES\n" : "NO\n");
	}
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