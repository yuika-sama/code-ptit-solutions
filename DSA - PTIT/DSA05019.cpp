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
	/*hav fun with coding*/
	int n, m;
	cin >> n >> m;
	int a[n+1][m+1], f[n+1][m+1];
	memset(f, 0, sizeof(f));
	for (int i=1; i<=n; i++){
		for (int j=1; j<=m; j++){
			cin >> a[i][j];
		}
	}
	int res = 0;
	for (int i=1; i<=n; i++){
		for (int j=1; j<=m; j++){
			if (a[i][j])
				f[i][j] = min(f[i-1][j], min(f[i][j-1], f[i-1][j-1])) + 1;
			res = max(res, f[i][j]);
		}
	}
	cout << res;
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