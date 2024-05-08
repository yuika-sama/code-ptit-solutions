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
vector<int> adj[1005];
bool vs[1005];
void dfs(int u){
	vs[u] = true;
	for (auto x:adj[u]){
		if (!vs[x]){
			dfs	(x);
		}
	}	
}
void solve(){
	/*hav fun with coding*/
	for (int i=0; i<=1005; i++) adj[i].clear();
	memset(vs, false, sizeof(vs));

	int v, e;
	cin >> v >> e;
	int x,y;
	for (int i=0; i<e; i++){
		cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}

	int cc = 0;
	for (int i=1; i<=v; i++){
		if (!vs[i]){
			cc++;
			dfs(i);
		}
	}
	for (int i=1; i<=v; i++){
		int c = 0;
		memset(vs, false, sizeof(vs));
		vs[i] = true;
		for (int j=1; j<=v; j++){
			if (j!=i){
				if (!vs[j]){
					c++;
					dfs(j);
				}
			}
		}
		if (c > cc) cout << i << ' ';
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