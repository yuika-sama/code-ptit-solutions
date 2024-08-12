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
/* Input goc:
1
9  12 1
1  2   4
1  8   8
2  3   8
2  8   11
3  4   7
3  6   4
3  9   2
4  5   9
4  6  14
5  6  10
6  7  2
6  9  6

Output goc: 0 4 12 19 21 11 9 8 14
Output chuan: 0 4 12 19 21 11 9 8 14
*/
int n,m,s;
vector<pii> adj[1005];
void dijkstra(){
	priority_queue<pii, vector<pii>, greater<pii>> q;
	q.push({0, s});
	vector<int> d(n+1, INT_MAX);
	d[s] = 0;
	while (!q.empty()){
		pii t = q.top(); q.pop();
		if (t.fi <= d[t.sc]){
			for (pii &i:adj[t.sc]){
				if (d[i.fi] > d[t.sc] + i.sc){
					d[i.fi] = d[t.sc] + i.sc;
					q.push({d[i.fi], i.fi});
				}
			}
		}
	}

	for (int i=1; i<=n; i++){
		cout << d[i] << ' ';
	}
}

void solve(){
	/*hav fun with coding*/
	cin >> n >> m >> s;
	for (auto& i:adj) i.clear();
	while (m--){
		int x,y,z;
		cin >> x >> y >> z;
		adj[x].pb({y, z});
		adj[y].pb({x, z});
	}
	dijkstra();
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