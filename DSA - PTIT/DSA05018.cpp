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
	bool f[n+5][n+5];
	memset(f, false, sizeof(f));
	for (int i=0; i<n; i++){
		f[i][i] = 1;
	}
	int res = 1;
	for (int k=1; k<n; k++){
		for (int i=0; i<n-k; i++){
			int j = i+k;
			if (s[i] == s[j] and k == 1) f[i][j] = 1;
			else if (s[i] == s[j] and k > 1) f[i][j] = f[i+1][j-1];
			else f[i][j] = 0;
			if (f[i][j] == 1){
				res = max(res, j-i+1);
			}
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