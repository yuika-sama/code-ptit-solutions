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
bool check[1001];
int M[1001];
vector<int> A[1001];
string bfs(int n, int v){
	int maxx = 1;
	for (int i=1; i<=n; i++) M[i] = 1;
	for (int i=1; i<=n; i++){
		if (!check[i]){
			check[i] = true;
			queue<int> q;
			q.push(i);
			while (!q.empty()){
				int tmp = q.front(); q.pop();
				for (auto x:A[tmp]){
					if (M[x] == M[tmp]) M[x]++;
					maxx = max(maxx, max(M[x], M[tmp]));
					if (maxx > v) return "NO";
					if (!check[x]) q.push(x), check[x] = true;
				}
			}
		}
	}
	return "YES";
}
void solve(){
	int n, m, v;
	cin >> n >> m >> v;
	for (int i=0; i<=n; i++){
		A[i].clear();
		check[i] = false;
	}
	while (m--){
		int x, y;
		cin >> x >> y;
		A[x-1].pb(y-1);
		A[y-1].pb(x-1);
	}
	cout << bfs(n, v);
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