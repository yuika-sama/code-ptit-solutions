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
const int dx[4] = {1, -1, 0, 0};
const int dy[4] = {0, 0, -1, 1};
const string dir = "DULR";
int a[10][10] = {};
int n;
bool vs[15][15];
vector<string> res;

void dfs(int x, int y, string s){
	if (x == n and y == n){
		res.pb(s);
	}
	vs[x][y] = true;
	for (int i=0; i<4; i++){
		int new_x = x + dx[i];
		int new_y = y + dy[i];
		if (a[new_x][new_y] == 1 and !vs[new_x][new_y]){
			if (new_x >= 1 and new_y >= 1 and new_x <=n and new_y <= n){
				dfs(new_x, new_y, s + dir[i]);
			}
		}
	}
	vs[x][y] = false;
}
void solve(){
	/*hav fun with coding*/
	cin >> n;
	memset(a, 0, sizeof(a));
	memset(vs, false, sizeof(vs));
	res.clear();
	for (int i=1; i<=n; i++){
		for (int j=1; j<=n; j++){
			cin >> a[i][j];
		}
	}
	if (a[1][1] == 0 or a[n][n] == 0) cout << -1; else {
		dfs(1, 1, "");
		if (res.size() == 0) cout << -1; else {
			sort(res.begin(), res.end());
			for (auto i:res){
				cout << i << ' ';
			}
		}
	}
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