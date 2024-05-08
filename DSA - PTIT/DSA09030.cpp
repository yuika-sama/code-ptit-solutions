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
set<int> adj[1005];
int color[1005];
bool bfs(int u){
	queue<int> q;
	q.push(u);
	color[u] = 0;
	while (!q.empty()){
		int v = q.front(); q.pop();
		for (int x:adj[v]){
			if (color[x] == -1){
				color[x] = 1 - color[v];
				q.push(x);
			} else if (color[x] == color[v]) return false;
		}
	}
	return true;
}
void solve(){
	/*hav fun with coding*/
	for (auto& i:adj){
		i.clear();
	}
	memset(color, -1, sizeof(color));
	cin >> n >> m;
	int x, y;
	while (m--){
		cin >> x >> y;
		adj[x].ins(y);
		adj[y].ins(x);
	}
	bool ok = true;
	for (int i=1; i<=n; i++){
		if (color[i] == -1){
			if (!bfs(i)){
				cout << "NO";
				return;
			}
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