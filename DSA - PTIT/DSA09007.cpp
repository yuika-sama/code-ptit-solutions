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
int u, v, s, t;
int parent[1005];
bool vs[1005];
void bfs(int u){
	queue<int> q;
	q.push(u);
	vs[u] = true;
	while (!q.empty()){
		int x = q.front(); q.pop();
		for (auto y:adj[x]){
			if (!vs[y]){
				parent[y] = x;
				q.push(y);
				vs[y] = true;
			}
		}
	}
}
void solve(){
	/*hav fun with coding*/
	for (auto& i:adj){
		i.clear();
	}
	memset(parent, 0, sizeof(parent));
	memset(vs, false, sizeof(vs));
	cin >> u >> v >> s >> t;
	int x, y;
	for (int i=0; i<v; i++){
		cin >> x >> y;
		adj[x].ins(y);
		adj[y].ins(x);
	}
	bfs(s);
	if (!vs[t]){
		cout << -1;
	} else {
		vector<int> res;
		while (s!=t){
			res.pb(t);
			t = parent[t];
		}
		res.pb(s);
		reverse(res.begin(), res.end());
		for (auto i:res){
			cout << i<< ' ';
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