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


void solve(){
	/*hav fun with coding*/
	int x, y, z;
	cin >> x >> y >> z;
	string a, b, c; 
	cin >> a >> b >> c;
	int f[105][105][105];	
	memset(f, 0, sizeof(f));
	for (int i=1; i<=a.sz; i++){
		for (int j=1; j<=b.sz; j++){
			for (int k=1; k<=c.sz; k++){
				if (a[i-1] == b[j-1] and b[j-1] == c[k-1]) f[i][j][k] = f[i-1][j-1][k-1] + 1;
				else f[i][j][k] = max(f[i-1][j][k], max(f[i][j-1][k], f[i][j][k-1]));
			}
		}
	}

	cout << f[a.sz][b.sz][c.sz];
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