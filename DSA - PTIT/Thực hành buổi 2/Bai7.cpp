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
#define sp << ' ' <<
#define endl '\n'
#define precision(x) setprecision(x) << fixed
#define keocon {cout << "I used to be your Tinkle Bell, we are too old for fairytales, my love."}


//end of template
int n, m, x;
int u, v;
bool vs[1005];
set<int> adj[1005];
vector<int> res;
vector<vector<int>> cc;
int position = -1, d = 0;
void dfs(int u){
	vs[u] = true;
	res.pb(u);
	if (u == x){
		position = d;
	}
	for (auto v:adj[u]){
		if (!vs[v]){
			dfs(v);
		}
	}
}
void connected_component(){
	memset(vs, false, sizeof(vs));
	for (int i=1; i<=n; i++){
		if (!vs[i]){
			res.clear();
			dfs(i);
			cc.pb(res);
			d++;
		}
	}
}
void solve(){
	/*hav fun with coding*/
	memset(vs, false, sizeof(vs));

	cin >> n >> m >> x;
	for (int i=0; i<m; i++){
		cin >> u >> v;
		adj[u].ins(v);
		adj[v].ins(u);
	}

	connected_component();
	if (d == 1){
		cout << 0;
	} else {
		set<int> se;
		for (int i=0; i<cc.size(); i++){
			if (i != position){
				for (auto j:cc[i]){
					se.ins(j);
				}
			}
		}
		for (auto i:se){
			cout << i << endl;
		}
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
	return 0;
}