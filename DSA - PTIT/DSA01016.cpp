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
int a[11];
void out(int n){
	string s = "(";
	for (int i=1; i<=n; i++){
		s+=to_string(a[i]) + " ";
	}
	s[s.size()-1] = ')';
	cout << s << ' ';
}
void calclate(int n, int i, int s){
	for (int j=n; j>=1; --j){
		a[i] = j;
		if (j == s) out(i); else
		if (j<s) calclate(j, i+1, s-j);
	}
}
void solve(){
	/*hav fun with coding*/
	int n; cin >> n;
	memset(a, 0, sizeof(a));
	calclate(n, 1, n);
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