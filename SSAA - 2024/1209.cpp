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

#define t4 tuple<int, int, int, int>
//end of template
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
map<t4, bool> wall;
int n, k, m, cnt;
bool vs[105][105], a[105][105];

bool moveable(int x, int y, int new_x, int new_y){
	if (new_x < 1 or new_x > n or new_y < 1 or new_y > n) return false;
	if (wall[{x,y,new_x, new_y}]) return false;
	if (vs[new_x][new_y] == true) return false;
	return true;
}
void dfs(int x, int y){ //dem so cap cuu den duoc voi nhau
	cnt += a[x][y];
	vs[x][y] = true;
	for (int i=0; i<4; i++){
		int new_x = x + dx[i];
		int new_y = y + dy[i];
		if (moveable(x, y, new_x, new_y)){
			dfs(new_x, new_y);
		}
	}
}


void solve(){
	/*hav fun with coding*/
	cin >> n >> k >> m;
	int x,y,z,t;
	while (m--){
		cin >> x >> y >> z >> t;
		wall[{x,y,z,t}] = true;
		wall[{z,t,x,y}] = true;
	}
	for (int i=1; i<=k; i++){
		cin >> x >> y;
		a[x][y] = true;
	}
	//so cap cuu den duoc voi nhau o moi thanh phan lien thong
	vector<int> v;
	for (int i=1; i<=k; i++){
		for (int j=1; j<=k; j++){
			if (!vs[i][j]){
				cnt = 0;
				dfs(i, j);
				v.pb(cnt);
			}
		}
	}
	// dem tong so cap cuu den duoc voi nhau
	int sum = 0;
	for (int i:v){
		sum += i;
	}
	int ans = sum*(sum-1)/2; //tong so cap cuu??
	for (int i:v){
		ans -= i*(i-1)/2;
	}
	cout << ans;
}
main(){
	faster();
	int T = 1;
	// cin >> T;
	while (T--){
		solve();
		cout << endl;
	}
	cerr << "Time elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
	return 0;
}