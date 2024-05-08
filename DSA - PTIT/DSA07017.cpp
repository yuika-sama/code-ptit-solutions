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
	int n; cin >> n ;
	int a[n+5], f[n+5], f1[n+5];
	//f: next_greater(a[i]), f1: right_smaller(f[i]);
	for (int i=0; i<n; i++) cin >> a[i];
	stack<int> st, st1;
	for (int i=n-1; i>=0; i--){
		//get next greater of a[i]
		while (!st.empty() and st.top() <= a[i]) st.pop();
		if (st.empty()) f[i] = -1; else f[i] = st.top();
		st.push(a[i]);
	}
	for (int i=n-1; i>=0; i--){
		//get right smaller of f[i] inside a[i]
		if (f[i] == -1) f1[i] = -1; else {
			while (!st1.empty() and st1.top() >= a[i]) st1.pop();
			if (st1.empty()) f1[i] = -1; else f1[i] = st1.top();
			st1.push(a[i]);
		}
	}
	for (int i=0; i<n; i++) cout << f1[i] << ' ';
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