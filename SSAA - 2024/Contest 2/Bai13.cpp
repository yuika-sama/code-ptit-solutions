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
#define sqr(x) x*x
#define fi first
#define sc second
#define pb push_back
#define eb emplace_back
#define ins insert
#define sz size()
#define len length
#define mp make_pair
#define al(v) (v).begin(), (v).end()
#define sp << ' ' <<
#define endl '\n'
#define precision(x) setprecision(x) << fixed
#define nekonooke {cout << "Ame nara ashita wa hareru darou~"}
const int oo = 1e9+7;

//end of template
ll cal(int a[], int n){
	stack<int> st;
	ll l[n+5], r[n+5];
	for (int i=n; i>=1; i--){
		while (!st.empty() and a[st.top()] >= a[i]) st.pop();
		if (st.empty()) r[i] = n; else r[i] = st.top() - 1;
		st.push(i);
	}
	while (st.sz) st.pop();
	for (int i=1; i<=n; i++){
		while (!st.empty() and a[st.top()] >= a[i]) st.pop();
		if (st.empty()) l[i] = 1; else l[i] = st.top() + 1;
		st.push(i);
	}
	ll res = 1;
	for (int i=1; i<=n; i++){
		res = max(res, (r[i] - l[i] + 1) * a[i]);
	}
	return res;
}

void solve(){
	/*hav fun with coding*/
	int m, n;
	cin >> m >> n;
	// cin >> n >> m;
	int a[n+5];
	for (int i=1; i<=n; i++) cin >> a[i];
	int b[n+5];
	for (int i=1; i<=n; i++){
		b[i] = m-a[i];
	}
	ll res = max(cal(a, n), cal(b, n));
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
	cerr << "Time elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
	return 0;
}