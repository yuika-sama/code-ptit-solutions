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
vi a;
stack<int> fs, rs;
vi l, r;

void solve(){
	/*hav fun with coding*/
	int n; cin >> n;
	ll s = 0;
	a.resize(n);
	l.resize(n);
	r.resize(n);
	for (int i=0; i<n; i++){
		cin >> a[i];
		while (fs.empty() == false and a[i] <= a[fs.top()]){
			fs.pop();
		}
		if (fs.empty()){
			l[i] = 0;
		} else l[i] = fs.top() + 1;
		fs.push(i);
	}
	for (int i=n-1; i>=0; --i){
		while (!rs.empty() and a[i] <= a[rs.top()]){
			rs.pop();
		}
		if (rs.empty()){
			r[i] = n-1;
		} else r[i] = rs.top() - 1;
		rs.push(i);
	}
	for (int i=0; i<n; i++){
		s = max(s, (ll)a[i] * (r[i] - l[i] + 1));
	}
	cout << s;
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