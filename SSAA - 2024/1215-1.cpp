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
#define al(v) (v).begin(), (v).end()
#define sp << ' ' <<
#define endl '\n'
#define precision(x) setprecision(x) << fixed
#define nekonooke {cout << "Ame nara ashita wa hareru darou~"}
const int oo = 1e9+7;

//end of template
struct edge{
	int x,y,w;
};
int n, m;
set<pii> adj[1005];
bool vs[1005];
int parent[1005], d[1005];//save the edges
void prim(int u){
	vector<edge> mst;//save the edges
	priority_queue<pii, vector<pii>, greater<pii>> q;
	int res = 0;
	q.push({0, u});
	while (!q.empty()){
		pii top = q.top(); q.pop();
		int dinh = top.sc, weight = top.fi;
		if (vs[dinh]) continue;
		res += weight;
		vs[dinh] = true;
		if (u != dinh) mst.pb({dinh, parent[dinh], weight}); //save the edges
		for(auto it:adj[dinh]){
			int y = it.fi, w = it.sc;
			if (!vs[y] and w < d[y]){ //the second conditional for saving the edges
				d[y] = w; //save the edges//save the edges
				q.push({w, y});
				parent[y] = dinh;//save the edges
			}
		}
	}
	cout << res;
}
void solve(){
	/*hav fun with coding*/
	for (auto& i:adj) i.clear();
	memset(vs, false, sizeof(vs));
	cin >> n >> m;
	while (m--){
		int x, y, z;
		cin >> x >> y >> z;
		adj[x].ins({y, z});
		adj[y].ins({x, z});
	}
	for (auto& i:d) i = oo;//save the edges
	prim(1);
}
main(){
	faster();
	int T = 1;
	cin >> T;
	while (T--){
		solve();
		cout << endl;
	}
	cerr << "Time elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
	return 0;
}