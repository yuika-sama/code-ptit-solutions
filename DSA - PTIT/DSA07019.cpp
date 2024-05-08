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
	int a[n+5];
	ll l[n+5], r[n+5];
	for (int i=1; i<=n; i++) cin >> a[i];
	stack<int> st;
	for (int i=n; i>=1; i--){
		while (!st.empty() and a[st.top()] >= a[i]) st.pop();
		if (st.empty()) r[i] = n; else r[i] = st.top()-1;
		st.push(i);
	}
	while (!st.empty()) st.pop();
	for (int i=1; i<=n; i++){
		while (!st.empty() and a[st.top()] >= f[i]) st.pop();
		if (st.empty()) l[i] = 1; else l[i] = st.top()+1;
		st.push(i);
	}
	ll res = 1;
	for (int i=1; i<=n; i++){
		res = max(res, (r[i] - l[i] + 1) * a[i]);
		// res *= a[i];
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