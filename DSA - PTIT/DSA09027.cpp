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
		if (!vs[v]){
			DFS(v);
		}
	}
}

void solve(){
	/*hav fun with coding*/
	int n, m;
	cin >> n >> m;
	int x, y;
	for (auto& i:adj){
		i.clear();
	}
	for (int i=0; i<m; i++){
		cin >> x >> y;
		adj[x].ins(y);
		adj[y].ins(x);
	}
	int q; cin >> q;
	for (int i=0; i<q; i++){
		cin >> x >> y;
		memset(vs, false, sizeof(vs));
		DFS(x);
		if (vs[y] == !true){
			cout << "NO" << endl;
		} else cout << "YES" << endl;
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