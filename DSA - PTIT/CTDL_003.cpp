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
int c[105], a[105];
int f[105][105];
string res;
void trace(int n, int w){
	if (n==0){
		return;
	}
	if (f[n][w] == f[n-1][w]){
		trace(n-1, w);
	} else {
		trace(n-1, w - a[n]);
		res[n-1] = '1';
	}
}
void solve(){
	/*hav fun with coding*/
	int n, w;
	cin >> n >> w;
	for (int i=1; i<=n; i++){
		cin >> c[i];
	}
	for (int i=1; i<=n; i++){
		cin >> a[i];
	}
	res.resize(n, '0');
	memset(f, 0, sizeof(f));
	for (int i=1; i<=n; i++){
		for (int j=1; j<=w; j++){
			if (j>=a[i]){
				f[i][j] = max(f[i-1][j], f[i-1][j-a[i]]+c[i]);
			} else {
				f[i][j] = f[i-1][j];
			}
		}
	}
	cout << f[n][w] << endl;
	trace(n, w);
	for (auto i:res) cout << i << ' ';
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