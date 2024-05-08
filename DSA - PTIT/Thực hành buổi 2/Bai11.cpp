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
vector<int> a[105];
int u, v;
bool bfs(int x){
	bool vs[105];
	memset(vs, false, sizeof(vs));
	vs[x] = true;
	queue<int> q;
	q.push(u);
	vs[u] = true;
	while (!q.empty()){
		x = q.front(); q.pop();
		for (auto& i:a[x]){
			if (!vs[i]){
				if (i == v){
					return false;
				}
				q.push(i);
				vs[i] = true;
			}
		}
	}
	return true;
}
void solve(){
	/*hav fun with coding*/
	for (auto& i:a){
		i.clear();
	}

	int n, m, x, y;
	cin >> n >> m >> u >> v;
	for (int i=0; i<m; i++){
		cin >> x >> y;
		a[x].pb(y);
	}

	int ans = 0;
	for (int i=1; i<=n; i++){
		if (i == u or i == v){
			continue;
		}
		ans += bfs(i);
	}

	cout << ans;
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