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
struct Edge{
	int u, v, w;
	bool operator<(const Edge& other)const{
		return w > other.w;
	}
};
vector<Edge> edge;
int prim(int n, int start){
	int mw = 0;
	vector<bool> vs(n, false);
	priority_queue<Edge> pq;
	vs[start] = true;
	for (Edge i:edge){
		if (i.u == start){
			pq.push(i);
		}
	}
	while (!pq.empty()){
		Edge cur = pq.top();
		pq.pop();
		int u = cur.u;
		int v = cur.v;
		if (!vs[v]){
			vs[v] = true;
			mw = max(mw, cur.w);
			for (Edge i:edge){
				if (i.u == v and !vs[i.v]){
					pq.push(i);
				}
			}
		}
	}
	return mw;
}
void solve(){
	/*hav fun with coding*/
	int n, m, q;
	cin >> n >> m >> q;
	for (int i=0; i<m; i++){
		int u, v, w;
		cin >> u >> v >> w;
		edge.pb({u-1, v-1, w});
	}
	while (q--){
		int s, t;
		cin >> s >> t;
		int mw = prim(n, s-1);
		if (mw == 0){
			cout << -1 << endl;
		} else {
			cout << mw << endl;
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
	return 0;
}