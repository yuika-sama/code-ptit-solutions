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
//seem ac

//end of template
ll f[46], l[46];
ll calclate(int n, int k){
	if (k == 1){
		if (n == 0){
			return 0;
		} else 
		if (n == 1)
			return 1;
	}
	ll res = 0;
	int index;
	while (k>=2){
		index = upper_bound(f, f+46, k) - f;
		index -= 1;
		res += l[index];
		k -= f[index];
	}
	if (k == 1 and index%2==0) res++;
	return res;
}
void solve(){
	/*hav fun with coding*/
	int n;
	ll k;
	cin >> n >> k;
	cout << calclate(n, k);
}
main(){
	faster();
	l[0] = 0, l[1] = 1; // counting 'B'
	f[0] = 1, f[1] = 1; //fib string len;
	for (int i=2; i<=45; i++){
		f[i] = f[i-1] + f[i-2];
		l[i] = l[i-1] + l[i-2];
	}
	int T = 1;
	cin >> T;
	while (T--){
		solve();
		cout << endl;
	}
	return 0;
}