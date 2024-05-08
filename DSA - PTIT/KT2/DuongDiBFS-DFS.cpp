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
int x, y;
vector<int> adj[1005];
bool vs1[1005], vs2[1005];
int parent1[1005], parent2[1005];

void dfs(int u){
	vs1[u] = true;
	for (auto v:adj[u]){
		if (!vs1[v]){
			parent1[v] = u;
			dfs(v);
		}
	}
}

void bfs(int u){
	queue<int> q;
	q.push(u);
	vs2[u] = true;
	while (!q.empty()){
		x = q.front(); q.pop();
		for (auto y:adj[x]){
			if (!vs2[y]){
				vs2[y] = true;
				parent2[y] = x;
				q.push(y);
			}
		}
	}
}

void solve(){
	/*hav fun with coding*/
	memset(vs1, false, sizeof(vs1));
	memset(parent1, 0, sizeof(parent1));
	memset(vs2, false, sizeof(vs2));
	memset(parent2, 0, sizeof(parent2));
	memset(adj, {}, sizeof(adj));
	cin >> n >> m;
	for (int i=0; i<m; i++){
		cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	for (int i=2; i<=n; i++){
		// go
		memset(vs1, false, sizeof(vs1));
		memset(parent1, 0, sizeof(parent1));
		dfs(1);
		if (!vs1[i]){
			cout << -1 << endl;
		} else {
			vector<int> res;
			int s = 1, t = i;
			while (s!=t){
				res.pb(t);
				t = parent1[t];
			}
			res.pb(s);
			reverse(res.begin(), res.end());
			for (auto x:res){
				cout << x << ' ';
			}
			cout << endl;
		}
		// back
		memset(vs2, false, sizeof(vs2));
		memset(parent2, 0, sizeof(parent2));
		bfs(i);
		if (!vs2[1]){
			cout << -1 << endl;
		} else {
			vector<int> res;
			int s = i, t = 1;
			while (s!=t){
				res.pb(t);
				t = parent2[t];
			}
			res.pb(s);
			reverse(res.begin(), res.end());
			for (auto x:res){
				cout << x << ' ';
			}
			cout << endl;
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