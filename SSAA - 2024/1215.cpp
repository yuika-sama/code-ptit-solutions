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
	int x, y, w;
};
int n, m;
set<pii> adj[1005];
bool vs[1005];
void prim(int u){
	vector<edge> mst;
	int d = 0;
	vs[u] = true;

	while(mst.sz < n-1){
		int min_w = oo;
		int x, y;
		for (int i=1; i<=n; i++){
			if (vs[i]){
				for (auto it:adj[i]){
					int j = it.fi, weight = it.sc;
					if (!vs[j] and weight < min_w){
						min_w = weight;
						x = j, y = i;
					}
				}
			}
		}
		mst.pb({x,y,min_w});
		d += min_w;vs[x] = true;
	}
	cout << d;
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