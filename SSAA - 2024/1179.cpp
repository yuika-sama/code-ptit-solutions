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
set<int> adj[1001];
bool vs[1001];
void dfs(int u){
	vs[u] = true;
	cout << u << ' ';
	for (auto v:adj[u]){
		if (!vs[v]){
			dfs(v);
		}
	}
}

void solve(){
	/*hav fun with coding*/
	int n, m , s;
	cin >> n >> m >> s;
	for (auto& i:adj){
		i.clear();
	}
	memset(vs, false, sizeof(vs));
	for (int i=0; i<m; i++){
		int x, y;
		cin >> x >> y;
		adj[x].ins(y);
		adj[y].ins(x);
	}
	dfs(s);
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