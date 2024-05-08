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
	vector<int> a;
	int n;
	cin >> n;
	a.resize(n);
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	reverse(a.begin(), a.end());
	vector<vector<int>> res;
	for (int i=0; i< (1<<n); i++){
		bitset<32> b(i);
		vector<int> t;
		int sum = 0;
		string sb = b.to_string().substr(32-n);
		for (int i=0; i<sb.size(); i++){
			if (sb[i] == '1'){
				sum += a[i];
				t.pb(a[i]);
			}
		}
		if (sum % 2 == 1){
			res.pb(t);
		}
		// cout << b.to_string().substr(32-n) << endl;
	}
	for (auto i:res){
		for (auto j:i){
			cout << j << ' ';
		}
		cout << endl;
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