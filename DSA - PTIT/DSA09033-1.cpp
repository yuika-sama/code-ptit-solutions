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
int n, m;
int u, v;
int parent[1005], num[1005];
void init_(){
	for (int i=1; i<=n; i++){
		parent[i] = i;
		num[i] = 1;
	}
}
int find_(int u){
	if (u!=parent[u]){
		parent[u] = find_(parent[u]);
	}
	return parent[u];
}
bool union_(int u, int v){
	int a = find_(u), b = find_(v);
	if (a == b) return false;
	if (num[a] < num[b]) swap(a, b);
	parent[b] = a;
	num[a] += num[b];
	return true;
}

void solve(){
	/*hav fun with coding*/
	cin >> n >> m;
	while (m--){
		cin >> u >> v;
		union_(u, v);
	}
	int MAX = -1;
	for (int i=1; i<=n; i++){
		MAX = max(MAX, num[parent[i]]);
	}
	cout << MAX;
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