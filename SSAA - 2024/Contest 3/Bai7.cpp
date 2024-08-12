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
// int main() {
// 	int n, k;
// 	cin >> n >> k;
// 	vector<int> a(n);
// 	for (auto& i : a) cin >> i;
// 	sort(a.rbegin(), a.rend());
// 	vector<vector<int>> c(n/k);
// 	int j = 0;
// 	for (int i = 0; i < n; i++) {
// 		c[j++].push_back(a[i]);
// 		if (j == n / k) j = 0;
// 	}
// 	long long sum = 0;
// 	for (int i = 0; i < n / k - 1; i++) {
// 		for (int j = 0; j < c[i].size(); j++) sum += (c[i][j] - c[i + 1][j]);
// 	}
// 	cout << sum << endl;
// }

void solve(){
	/*hav fun with coding*/
	int n, k; cin >> n >> k;
	vector<int> a(n+1);
	for (int i=1; i<=n; i++) cin >> a[i];
	sort(al(a));
	int res = 0, pos = n/k+1;
	a[0] = a[1];
	for (int i=1; i<=n; i++){
		if (i == pos){
			pos += n/k;
			continue;
		}
		res += a[i] - a[i-1];
	}
	cout << res;
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