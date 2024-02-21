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
string f[10001];
string bin(int n){
	string r = "";
	while (n){
		r += to_string(n%2);
		n/=2;
	}
	reverse(r.begin(), r.end());
	return r;
}
void pre_calclate(int n){
	f[0] = "0", f[1] = "1";
	for (int i=2; i<=n; i++){
		f[i] = bin(i);
	}
}

//end of template


void solve(){
	/*hav fun with coding*/
	int n; cin >> n;
	for (int i=1; i<=n; i++){
		cout << f[i] << ' ';
	}
}
main(){
	faster();
	int T = 1;
	cin >> T;
	pre_calclate(10000);
	while (T--){
		solve();
		cout << endl;
	}
	return 0;
}