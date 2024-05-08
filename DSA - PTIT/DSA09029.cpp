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
int n, m;
bool vs[1005], ok;
void dfs(int u, int count){
	if (count == n) ok = true;
	if (ok) return;
	for (auto v:adj[u]){
		if (!vs[v]){
			vs[v] = true;
			dfs(v, count+1);
			vs[v] = false;
		}
	}
}
void solve(){
	/*hav fun with coding*/
	memset(vs, false, sizeof(vs));
	for (auto& i:adj){
		i.clear();
	}
	ok = false;

	cin >> n >> m;
	while (m--){
		int x, y;
		cin >> x >> y;
		adj[x].ins(y);
		adj[y].ins(x);
	}
	for (int i=1; i<=n; i++){
		memset(vs, false, sizeof(vs));
		vs[i] = true;
		dfs(i, 1);
		if (ok) break;
	}
	cout << ok;
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