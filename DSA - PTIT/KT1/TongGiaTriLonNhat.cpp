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
	int n, v;
	cin >> n >> v;
	int a[n+5], c[n+5];
	for (int i=1; i<=n; i++) cin >> c[i] >> a[i];
	int f[n+5][v+5];
	memset(f, 0, sizeof(f));
	for (int i=1; i<=n; i++){
		for (int j=0; j<=v; j++){
			if (j>=c[i]){
				f[i][j] = max(f[i-1][j], f[i-1][j-c[i]] + a[i]);
			} else f[i][j] = f[i-1][j];
		}
	}
	cout << f[n][v] << endl;
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