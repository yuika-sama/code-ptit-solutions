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
bool vs[1001];
void dfs(vector<int> adj[], int u){
	cout << u << ' ';
	sort(adj[u].begin(), adj[u].end());
	vs[u] = true;
	for (int v:adj[u]){
		if (!vs[v]){
			dfs(adj, v);
		}
	}
}

void solve(){
	/*hav fun with coding*/
	int v, e, p;
	cin >> v >> e >> p;
	vector<int> adj[1001];
	memset(vs, 0, sizeof(vs));
	int x, y;
	for (int i=0; i<e; i++){
		cin >> x >> y;
		adj[x].pb(y);
	}
	dfs(adj, p);
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
