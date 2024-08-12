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
#define sqr(x) x*x
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
int parent[100005], num[100005];
int Find(int u){
	if (u!=parent[u]){
		parent[u] = Find(parent[u]);
	}
	return parent[u];
}
void Union(int u, int v){
	u = Find(u), v = Find(v);
	if (u == v) return;
	if (num[u] < num[v]) swap(u, v);
	parent[v] = u;
	num[u] += num[v];
}
void solve(){
	/*hav fun with coding*/
	int n; cin >> n;
	for (int i=1; i<=n; i++){
		int x, y, z; 
		cin >> x >> y >> z;

		if (parent[x] == 0){
			parent[x] = x, num[x] = 1;
		}
		if (parent[y] == 0){
			parent[y] = y, num[y] = 1;
		}
		if (z == 1){
			Union(x, y);
		} else {
			cout << (Find(x) == Find(y)) << endl;
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
	cerr << "Time elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
	return 0;
}