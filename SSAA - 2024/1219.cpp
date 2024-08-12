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
int parent[105];
int Find(int u){
	if (u == parent[u]) return u;
	return parent[u] = Find(parent[u]);
}
int Join(int u, int v){
	u = Find(u), v = Find(v);
	if (u == v) return 0;
	parent[v] = u;
	return 1;
}
void solve(){
	/*hav fun with coding*/
	int n; cin >> n;
	for (int i=0; i<n; i++) parent[i] = i;

	pair<double, double> a[n];
	for (int i=0; i<n; i++) cin >> a[i].fi >> a[i].sc;
	vector<pair<double, pair<int, int>>> canh;

	for (int i=0; i<n; i++){
		double x1 = a[i].fi, y1 = a[i].sc;
		for (int j=i+1; j<n; j++){
			double x2 = a[j].fi, y2 = a[j].sc;
			double dis = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
			canh.pb({dis, {i, j}});
		} 
	}
	sort(al(canh));
	double res =0 ;
	for (auto c:canh){
		int u = c.sc.fi, v = c.sc.sc;
		double w = c.fi;
		if (Join(u, v)) res+=w;
	}
	cout << precision(6) << res;
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