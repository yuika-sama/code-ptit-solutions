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
int n;
int a[15][15];
bool ok[10][10];
vector<string> res;
void Try(int x, int y, string path){
	if (x == n-1 and y == n-1){
		res.pb(path);
		return;
	}
	ok[x][y] = true;
	if (x+1 <= n-1 and a[x+1][y] == 1 and ok[x+1][y] == false) Try(x+1, y, path + "D");
	if (y+1 <= n-1 and a[x][y+1] == 1 and ok[x][y+1] == false) Try(x, y+1, path + "R");
	if (x-1 >= 0 and a[x-1][y] == 1 and ok[x-1][y] == false) Try(x-1, y, path + "U");
	if (y-1 >= 0 and a[x][y-1] == 1 and ok[x][y-1] == false) Try(x, y-1, path + "L");
	ok[x][y] = false;
}
void solve(){
	/*hav fun with coding*/
	cin >> n;
	res.clear();
	memset(a, 0, sizeof(a));
	memset(ok, false, sizeof(ok));
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			cin >> a[i][j];
		}
	}
	if (a[n-1][n-1] == 0 or a[0][0] == 0){
		cout << -1;
		return;
	}
	Try(0, 0, "");
	if (res.sz == 0) cout << -1; else {
		sort(al(res));
		for (auto i:res){
			cout << i << ' ';
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
	cerr << "Time elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
	return 0;
}