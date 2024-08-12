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
	int s, e, v;
};
int num[10005], parent[10005];
bool cmp(edge a, edge b){
	return a.v < b.v;
}
void init(int n){
	for (int i=1; i<=n; i++){
		parent[i] = i;
		num[i] = 1;
	}
}
int Find(int u){
	if (u == parent[u]) return u;
	return (Find(parent[u]));
}
bool Union(int u, int v){
	int a = Find(u), b = Find(v);
	if (a == b) return false;
	if (num[a] < num[b]) swap(a,b);
	parent[b] = a;
	num[a] += num[b];
	return true; 
}
void solve(){
	/*hav fun with coding*/
	memset(num, 0, sizeof(num));
	memset(parent, 0, sizeof(parent));
	int n, m; cin >> n >> m;
	vector<edge> list;
	list.clear();	
	while (m--){
		int x,y,z;
		cin >> x >> y >> z;
		list.pb({x,y,z});
	}
	sort(list.begin(), list.end(), cmp);
	init(n);
	int kq = 0, dem = 0;
	for (int i=0; i<list.sz; i++){
		if (Union(list[i].s, list[i].e)){
			dem++;
			kq+=list[i].v;
		}
		if (dem == n-1) break;
	}
	cout << kq;
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