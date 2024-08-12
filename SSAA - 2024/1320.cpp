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
int n, k;
int a[30];
vector<vector<int>> res;
void Try(int id, int sum, vector<int> v){
	if (sum == k){
		res.pb(v);
		return;
	}
	if (sum > k) return;
	for (int j=id; j<n; j++){
		if (a[j] + sum <= k){
			v.pb(a[j]);
			Try(j, sum+a[j], v);
			v.pop_back();
		}
	}
}
void solve(){
	/*hav fun with coding*/
	cin >> n >> k;
	memset(a, 0, sizeof(a));
	res.clear();
	vector<int> v;
	for (int i=0; i<n; i++) cin >> a[i];
	Try(0, 0, v);
	if (res.sz == 0) cout << -1;
	else {
		for (auto i:res){
			cout << '[';
			for (int j=0; j<i.sz-1; j++){
				cout << i[j] << ' ';
			}
			cout << i[i.sz-1] << ']';
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
	cerr << "Time elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
	return 0;
}