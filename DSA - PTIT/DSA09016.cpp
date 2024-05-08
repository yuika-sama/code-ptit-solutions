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
int n, m;
int x, y;
bool ok;
int vs[1005];
void dfs(int i){
	if (ok) return;
	vs[i] = 1;
	for (auto j:adj[i]){
		if (vs[j] == 0){
			dfs(j);
		} else if (vs[j] == 1){
			ok = true;
			return;
		}
	}
	vs[i] = 2;
}
void solve(){
	/*hav fun with coding*/
	memset(vs, 0, sizeof(vs));
	ok = false;
	for (auto& i:adj){
		i.clear();
	}
	cin >> n >> m;
	while (m--){
		cin >> x >> y;
		adj[x].ins(y);
	}
	for (int i=1; i<=n; i++){
		if (!vs[i] and !ok){
			dfs(i);
		}
	}
	if (ok) cout << "YES"; else cout << "NO";
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