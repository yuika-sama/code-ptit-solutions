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
void bfs(set<int> adj[], int u){
	queue<int> q;
	q.push(u);
	vs[u] = true;
	while (!q.empty()){
		int x = q.front(); q.pop();
		cout << x << ' ';
		for (int y:adj[x]){
			if (!vs[y]){
				q.push(y);
				vs[y] = true;
			}
		}
	}
}
void solve(){
	/*hav fun with coding*/
	int v, e, p;
	cin >> v >> e >> p;
	int x, y;
	set<int> adj[1001];
	memset(vs, 0, sizeof(vs));
	for (int i=0; i<e; i++){
		cin >> x >> y;
		adj[x].ins(y);
		adj[y].ins(x);
	}
	bfs(adj, p);
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