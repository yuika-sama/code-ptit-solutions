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
int n, m;
int u, v;
vector<vector<int>> adj;
vector<bool> vs;
void dfs(int u){
	vs[u] = true;
	for (auto v:adj[u]){
		if (!vs[v]){
			dfs(v);
		}
	}
}
void solve(){
	/*hav fun with coding*/
	/*Checking connected graph*/
	cin >> n >> m;
	adj.assign(n+1, {});
	vs.assign(n+1, false);
	while (m--){
		cin >> u >> v;
		adj[u].pb(v);
		adj[v].pb(u);
	}
	dfs(1);
	for (int i=2; i<=n; i++){
		if (!vs[i]){
			cout << "NO";
			return;
		}
	}
	cout << "YES";
}
main(){
	faster();
	int T = 1;
	cin >> T;
	while (T--){
		solve();
		cout << endl;
	}
	return 0;
}