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
bool a[505][505];
int n, m;
int cc = 0;
int dx[8] = {-1,-1,-1,0,1,1,1,0};
int dy[8] = {-1,0,1,1,1,0,-1,-1};
void dfs(int i, int j){
	a[i][j] = 0;
	for (int k=0; k<8; k++){
		int x = i + dx[k];
		int y = j + dy[k];
		if (x >= 1 and y >= 1 and x <= n and y <= m and a[x][y] == 1){
			dfs(x, y);
		}
	}
}
void solve(){
	/*hav fun with coding*/
	cin >> n >> m;
	memset(a, 0, sizeof(a));
	for (int i=1; i<=n; i++){
		for (int j=1; j<=m; j++){
			cin >> a[i][j];
		}
	}
	cc = 0;
	for (int i=1; i<=n; i++){
		for (int j=1; j<=m; j++){
			if (a[i][j] == 1){
				dfs(i, j);
				cc++;
			}
		}
	}
	cout << cc;
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