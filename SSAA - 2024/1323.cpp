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
#define al(v) (v).begin(), (v).end()
#define sp << ' ' <<
#define endl '\n'
#define precision(x) setprecision(x) << fixed
#define nekonooke {cout << "Ame nara ashita wa hareru darou~"}
const int oo = 1e9+7;

//end of template

ll to_long(string num){
	ll x = 0;
	for (auto i:num){
		x = x*10 + i - '0';
	}
	return x;
}
void solve(){
	/*hav fun with coding*/
	string s; cin >> s;
	ll res = -1;
	bool state = false;
	for (int i=0; i<(1<<s.sz); i++){
		bitset<32> bs(i);
		string t = bs.to_string().substr(32 - s.sz);
		string num = "";
		for (int j=0; j<t.sz; j++){
			if (t[j] == '1'){
				num += s[j];
			}
		}
		ll l_num = to_long(num);
		ll cube_root = round(cbrt(l_num));
		if (cube_root * cube_root * cube_root == l_num and l_num != 0){
			res = max(res, l_num);
			state = true;
		}
	}
	if (state) cout << res; else cout << -1;
}
main(){
	faster();
	int T = 1;
	cin >> T;
	while (T--){
		solve();
		cout << endl;
	}
	cerr << "Time elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
	return 0;
}