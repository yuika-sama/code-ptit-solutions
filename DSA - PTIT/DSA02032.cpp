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
int n, k;
vector<int> a;
vector<vector<int>> res;
void Try(int limit, int value, vector<int> v){
	if (value == k){
		res.pb(v);
	}
	for (int i=0; i<n; i++){
		if (a[i] >= limit and a[i] + value <= k){
			v.pb(a[i]);
			Try(a[i], value + a[i], v);
			v.pop_back();
		}
	}
}
void solve(){
	/*hav fun with coding*/
	cin >> n >> k;
	a.resize(n);
	res.clear();
	for (auto& i:a) cin >> i;
	sort(a.begin(), a.end());
	Try(1, 0, {});
	if (res.size() == 0) cout << -1; else {
		cout << res.size() << ' ';
		for (auto i:res){
			cout << '{';
			for (int j=0; j<i.size(); j++){
				cout << i[j];
				if (j!=i.size() - 1) cout << ' ';
			}
			cout << "} ";
		}
	}
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