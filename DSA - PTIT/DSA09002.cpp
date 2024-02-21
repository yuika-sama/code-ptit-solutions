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


void solve(){
	int n; cin >> n;
	vector<int> adj[100];
	string s;
	int x;
	for (int i=0; i<=n; i++){
		getline(cin, s);
		stringstream ss(s);
		while (ss >> s){
			x = stoi(s);
			adj[i].pb(x);
		}
	}
	bool d[100][100];
	memset(d, 0, sizeof(d));
	for (int i=1; i<=n; i++){
		sort(adj[i].begin(), adj[i].end());
		for (auto x:adj[i]){
			if (d[i][x] == false and d[x][i] == false){
				cout << i << ' ' << x << endl;
			}
			d[i][x] = d[x][i] = true;
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