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
vector<edge> E;
int n, m, s;
int d[1005];
bool negative;
void bellmanFord(){
	for (int i=1; i<=n; i++) d[i] = INT_MAX;
	d[s] = 0;
	
	for (int i=1; i<=n-1; i++){
		negative = true;
		for (edge e:E){
			if (d[e.x] < INT_MAX){
				if (d[e.y] > d[e.x] + e.w){
					d[e.y] = d[e.x] + e.w;
					negative = false;
				}
			}
		}
		if (negative) return;
	}
}
void solve(){
	/*hav fun with coding*/
	E.clear();
	negative = true;
	memset(d, INT_MAX, sizeof(d));
	cin >> n >> m >> s;
	for (int i=0; i<m; i++){
		int x,y,w;
		cin >> x >> y >> w;
		E.pb((edge){x,y,w});
	}
	bellmanFord();
	if (negative){
		for (int i=1; i<=n; i++){
			if (d[i] == INT_MAX) cout << "INFI ";
			else cout << d[i] << ' ';	
		}
	} else cout << -1;
	
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