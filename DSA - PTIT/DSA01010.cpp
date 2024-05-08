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
	int n, k;
	cin >> n >> k;
	vector<int> a(k+1);
	map<int, int> m;
	for (int i=1; i<=k; i++){
		cin >> a[i];
		m[a[i]]++;
	}
	int i = k;
	while (i>=1 and a[i] == n-k+i) i--;
	if (i==0){
		cout << k;
		return;
	}
	a[i]++;
	while (i<k){
		a[i+1] = a[i]+1;
		i++;
	}
	int ans = 0;
	for (int i=1; i<=k; i++){
		if (m[a[i]] == 0) ans++;
	}
	cout << ans;
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