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

bool equal(int a, int b, int c, int d) {
    return a * d == b * c;
}
void solve(){
	/*hav fun with coding*/
	int n, m;
	cin >> n >> m;
	int c[n][m], kq = 1;
	int a[10001], b[10001];
	for (int i=0; i<n; i++) cin >> a[i];
	for (int i=0; i<m; i++) cin >> b[i];

	for (int i=0; i<n; i++) c[i][0] = 1;
	for (int i=0; i<m; i++) c[0][i] = 1;

	for (int i=1; i<n; i++){
		for (int j=1; j<m; j++){
			if (equal(a[i], b[j], a[i-1], b[j-1])){
				c[i][j] = c[i-1][j-1] + 1;
			} else c[i][j] = 1;
		}
	}

	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			kq = max(kq, c[i][j]);
		}
	}
	cout << kq;
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