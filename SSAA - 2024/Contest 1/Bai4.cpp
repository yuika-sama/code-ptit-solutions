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
int n, k;
vector<int> x(21);
vector<vector<int>> res;
void Try(int i){
	for (int j=x[i-1]+1; j <= n-k+i; j++){
		x[i] = j;
		if (i == k){
			res.pb(x);
		} else Try(i+1);
	} 
}

void solve(){
	/*hav fun with coding*/
	cin >> n >> k;
	for (int i=1; i<=k; i++)x[i] = i;
	x[0] = 0;
	res.pb({});
	Try(1);
	int f[93];
	memset(f, 0, sizeof(f));
	f[0] = f[1] = 1;
	for (int i=2; i<=92; i++){
		f[i] = f[i-1] + f[i-2];
		if (f[i] >= res.sz) break;
	}
	for(int i=1;;i++){
		if (f[i] == 0 or f[i] > res.sz) return;
		cout << f[i] << ": ";
		for (int j=1; j<=k; j++){
			cout << res[f[i]][j] << ' ';
		}
		cout << endl;
	}
	// int id = 1;
	// while (true){
	// 	if (f[id] == 0) return;
	// 	cout << f[id++] << ": ";
	// 	for (int i=1; i<=k; i++){
	// 		cout << res[f[id]][i] << ' ';
	// 	}
	// }
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