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
	string s; cin >> s;
	int n = s.size();
	int f[n+5][n+5];
	memset(f, 0, sizeof(f));
	int res = 0;
	for (int len = 1; len <= n; len++){
		for (int l = 0; l<n-len+1; l++){
			int r = l + len - 1;
			if (len == 1){
				f[l][r] = 1;
				continue;
			}
			if (len == 2){
				f[l][r] = 1 + (s[l] == s[r]);
				continue;
			}
			f[l][r] = max(f[l+1][r], f[l][r-1]);
			if (s[l] == s[r]) f[l][r] = max(f[l][r], 2 + f[l+1][r-1]);
			res = max(res, f[l][r]);
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