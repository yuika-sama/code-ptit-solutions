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
int scc = 0;
int time_dfs = 0;
int low[1005], num[1005];
bool deleted[1005];
stack<int> st;
void dfs(int u){
	num[u] = low[u] = ++time_dfs;
	st.push(u);
	for (int v:adj[u]){
		if (deleted[v]) continue;
		if (!num[v]){
			dfs(v);
			low[u] = min(low[u], low[v]);
		} else low[u] = min(low[u], num[v]);
	}
	if (low[u] == num[u]){
		scc++;
		int v;
		do {
			v = st.top();
			st.pop();
			deleted[v] = true;
		} while (v!=u);
	}
}
void solve(){
	/*hav fun with coding*/
	memset(deleted, false, sizeof(deleted));
	while (st.size()) st.pop();
	memset(low, 0, sizeof(low));
	memset(num, 0, sizeof(low));
	time_dfs = 0;
	scc = 0;
	for (auto& i:adj){
		i.clear();
	}
	int v, e;
	cin >> v >> e;
	int x, y;
	for (int i=0;i<e; i++){
		cin >> x >> y;
		adj[x].ins(y);
	}
	for (int i=1; i<=v; i++){
		if (!num[i]) dfs(i);
	}
	if (scc == 1) cout << "YES"; else cout << "NO";
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