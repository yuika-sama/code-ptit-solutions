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
	ll n; cin >> n;
	vector<int> a;
	while (n){
		a.pb(n%10);
		n/=10;
	}
	reverse(a.begin(), a.end());
	//so bdn lon nhat <= n
	int vt = a.size();
	for (int i=0; i<a.size(); i++){
		if (a[i] >= 2){
			vt = i;
			break;
		}
	}
	for (int i=vt; i<a.size(); i++){
		a[i] = 1;
	}
	//bien doi so bdn ve thap phan
	ll res = 0, s = 1;
	for (int i=a.sz-1; i>=0; i--){
		res += a[i]*s;
		s*=2;
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