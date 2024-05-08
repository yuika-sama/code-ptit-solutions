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
bool cmp(pii a, pii b){
	return (a.fi >= b.fi and a.sc >= b.sc);
}
void solve(){
	/*hav fun with coding*/
	int n; cin >> n;
	vector<pii> a(n), b(n);
	vector<int> f(n);
	int res = 0;
	for (int i=0; i<n; i++){
		cin >> a[i].fi >> a[i].sc;
		b[i] = {1e9, 1e9};
		f[i] = lower_bound(b.begin(), b.begin() + res + 1, a[i]) - b.begin();
		res = max(res, f[i]+1);
		b[f[i]] = a[i];
	}
	cout << res;
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