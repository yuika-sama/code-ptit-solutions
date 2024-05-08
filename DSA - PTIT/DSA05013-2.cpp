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
const int c = 1e9+7;
int calclate(int n, int k){
	vector<int> f(1e5+5, 0);
	f[0] = 1, f[1] = 1;
	for (int i= 2; i<=n; i++){
		for (int j=1; j<=min(i, k); j++){
			f[i] = (f[i] + f[i-j])%c;
		}
	}
	return f[n];
}

void solve(){
	/*hav fun with coding*/
	int n, k; cin >> n >> k;
	cout <<	calclate(n, k);
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