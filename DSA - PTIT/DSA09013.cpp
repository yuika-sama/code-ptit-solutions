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
multiset<int> adj[1005];
bool vs[1005];
int n, m;
int x, y;
vector<pii> edge;
void dfs(int start) { //actually this is bfs
    queue<int> q;
    q.push(start);
    
    while (!q.empty()) {
        int u = q.front(); q.pop();
        vs[u] = true;

        for (int v : adj[u]) {
            if (!vs[v]) {
                q.push(v);
            }
        }
    }
}

int connect(){
	int c = 0;
	for (int i=1; i<=n; i++){
		if (!vs[i]){
			c++;
			dfs(i);
		}
	}
	return c;
}
void solve(){
	/*hav fun with coding*/
	cin >> n >> m;
	for (auto& i:adj){
		i.clear();
	}
	edge.clear();
	memset(vs, false, sizeof(vs));
	for (int i=0; i<m; i++){
		cin >> x >> y;
		adj[x].ins(y);
		adj[y].ins(x);
		edge.pb({x, y});
	}
	int cc = connect();
	for (auto e:edge){
		x = e.fi, y = e.sc;
		adj[x].erase(y);
		adj[y].erase(x);
		memset(vs, false, sizeof(vs));
		if (cc<connect()){
			cout << x << ' ' << y << ' ';
		}
		adj[x].ins(y);
		adj[y].ins(x);
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