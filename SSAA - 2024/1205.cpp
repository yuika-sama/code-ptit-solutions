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
vector<int> adj[1005];
int n, m, k;
bool vs[1005];
int color[1005];
string bfs(int v){
	int maxx = 1;
	for (int i=1; i<=n; i++) color[i] = 1;
	for(int i=1; i<=n; i++){
		if (!vs[i]){
			vs[i] = true;
			queue<int> q;
			q.push(i);
			while (!q.empty()){
				int tmp = q.front(); q.pop();
				for(auto x:adj[tmp]){
					if (color[x] == color[tmp]) color[x]++;
					maxx = max(maxx, max(color[x], color[tmp]));
					if (maxx > v) return "NO";
					if (!vs[x]) q.push(x), vs[x] = true;
				}
			}
		}
	}
	return "YES";
}
void solve(){
	/*hav fun with coding*/
	cin >> n >> m >> k;
	for (auto& i:adj) i.clear();
	memset(vs, false, sizeof(vs));
	while (m--){
		int x, y;
		cin >> x >> y;
		adj[x-1].pb(y-1);
		adj[y-1].pb(x-1);
	}
	cout << bfs(k);
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