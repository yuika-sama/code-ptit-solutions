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
ll f[50], l[50];
ll cal(int n, int k){
	if (k == l[n]) return f[n];
	else if (k <= l[n-1]) return cal(n-1, k);
	else return f[n-1] + cal(n-2, k - l[n-1]);
}
void solve(){
	/*hav fun with coding*/
	int n, k;
	cin >> n >> k;
	cout << cal(n, k);
}
main(){
	faster();
	l[0] = 1, l[1] = 1; //fib string len
	f[0] = 1, f[1] = 0; // counting 'A'
	for (int i=2; i<=49; i++){
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