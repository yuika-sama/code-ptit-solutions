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
int n, k;
vector<string> res;
void Try(string s, int a, int b, int c){
	if (s.size() <= n){
		if (a and b and c and a<=b and b<=c) res.pb(s);
		if (s.size() == n) return;
	}
	Try(s + 'A', a+1, b, c);
	Try(s + 'B', a, b+1, c);
	Try(s + 'C', a, b, c+1);
}
bool cmp(string a, string b){
	if (a.size() == b.size()) return a<=b;
	return a.size() < b.size();
}
void solve(){
	/*hav fun with coding*/
	cin >> n;
	Try("", 0, 0, 0);
	sort(res.begin(), res.end(), cmp);
	for (auto i:res){
		cout << i << endl;
	}
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