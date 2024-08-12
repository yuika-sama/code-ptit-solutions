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
#define sqr(x) x*x
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
int n, m;
#define pip pair<int, pair<int, int>>
const int dx[] = {1, 0, 0, -1};
const int dy[] = {0, 1, -1, 0};
bool check(int i, int j){
	return i>=0 and j>=0 and i<n and j<m;
}

void solve(){
	/*hav fun with coding*/
	cin >> n >> m;
	int a[n+5][m+5];
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			cin >> a[i][j];
		}
	}
	//dijkstra
	vector<vector<int>> dp(n, vector<int>(m, 1e9));
	dp[0][0] = a[0][0];
	priority_queue<pip, vector<pip>, greater<pip>> q;
	q.push({a[0][0], {0, 0}}); //weight, x, y
	while (!q.empty()){
		pip tmp = q.top(); q.pop();
		int i = tmp.sc.fi, j = tmp.sc.sc;
		for (int k=0; k<4; k++){
			int x = i + dx[k], y = j + dy[k];
			if (check(x, y) and dp[x][y] > dp[i][j] + a[x][y]){
				dp[x][y] = dp[i][j] + a[x][y];
				q.push({dp[x][y], {x, y}});
			}
		}
	}

	cout << dp[n-1][m-1];
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