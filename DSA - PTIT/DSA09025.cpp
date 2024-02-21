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
set<int> adj[1005];
bool vs[1005];
int parent[1005];
void DFS(int u){
	vs[u] = true;
	for (int v:adj[u]){
		if(!vs[v]){
			parent[v] = u;
			DFS(v);
		}
	}
}
void solve(){
	/*hav fun with coding*/
	for (auto& i:adj){
		i.clear();
	}
	memset(vs, false, sizeof(vs));
	memset(parent, 0, sizeof(parent));
	int v, e, s, t;
	cin >> v >> e >> s >> t;
	int x, y;
	for (int i=1; i<=e; i++){
		cin >> x>> y;
		adj[x].insert(y);
	}
	DFS(s);
	if (!vs[t]) cout << -1; else {
		vector<int> res;
		while (t!=s){
			res.pb(t);
			t = parent[t];
		}
		res.pb(s);
		for (auto i = res.rbegin(); i!=res.rend(); i++){
			cout << *i <<' ';
		}
	}
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