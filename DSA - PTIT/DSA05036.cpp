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
	int n; cin >> n;
	double a[n+1], b[n+1];
	for (int i=0; i<n; i++){
		cin >> a[i] >> b[i];
	}
	int f[1001];
	int res = -1;
	for (int i=0; i<n; i++){
		f[i] = 1;
		for (int j=i-1; j>=0; j--){
			if (a[i] > a[j] and b[i] < b[j]){
				f[i] = max(f[i], f[j]+1);
			}
		}
		res = max(res, f[i]);
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