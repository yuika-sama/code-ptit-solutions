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
int ans;
int num[100005], parent[100005];
int n, m;
void init(){
	for (int i=1; i<=n; i++){
		parent[i] = i;
		num[i] = 1;
	}
}
int Find(int u){
	if (u!=parent[u]){
		parent[u] = Find(parent[u]);
	}
	return parent[u];
}
void Union(int u, int v){
	int a = Find(u), b = Find(v);
	if (a == b) return;
	if (num[a] < num[b]) swap(a, b);
	parent[b] = a;
	num[a] += num[b];
	ans = max(ans, num[a]);
}

void solve(){
	/*hav fun with coding*/
	cin >> n >> m;

	int u, v;
	ans = 0;
	memset(parent, 0, sizeof(parent));
	memset(num, 0, sizeof(num));
	init();
	
	for (int i=0; i<m; i++){
		cin >> u >> v;
		Union(u, v);
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