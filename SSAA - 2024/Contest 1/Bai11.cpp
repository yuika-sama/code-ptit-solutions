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
bool cmp(vector<int> a, vector<int> b) {
    string x = "", y = "";
    for (int i : a) x += to_string(i) + " ";
    x.pop_back(); // remove the last space
    for (int i : b) y += to_string(i) + " ";
    y.pop_back();
    return x < y;
}

void solve(){
	/*hav fun with coding*/
	int n; cin >> n;
	vector<int> a(n);
	vector<vector<int>> res;
	for (int i=0; i<n; i++) cin >> a[i];
	for (int i=0; i<(1<<n); i++){
		bitset<32> bs(i);
		string bit = bs.to_string().substr(32 - n);
		vector<int> tmp;
		for (int i=0; i<bit.sz; i++){
			if (bit[i] == '1'){
				tmp.pb(a[i]);
			}
		}
		if (is_sorted(al(tmp)) and tmp.sz >= 2) res.pb(tmp);
	}
	sort(al(res), cmp);
	for(auto i:res){
		for (auto j:i){
			cout << j << ' ';
		}
		cout << endl;
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
	cerr << "Time elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
	return 0;
}