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
ll f[1005][1005];
const ll c = 1e9+7;
void solve(){
	/*hav fun with coding*/	
	int n, k;
	cin >> n >> k;
	cout << f[n][k];
}
main(){
	faster();
	for (int i=0; i<=1001; ++i){
		for (int j=0; j<=min(i, 1001); ++j){
			if (j == 0) f[i][j] = 1;
			else {
				f[i][j] = (f[i-1][j] + j*f[i-1][j-1])%c;
			}
			f[i][j+1] = 0;
		}
	}
	int T = 1;
	cin >> T;
	while (T--){
		solve();
		cout << endl;
	}
	return 0;
}