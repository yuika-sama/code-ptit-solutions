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
#define sqr(x) x*x
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


// void solve(){
// 	/*hav fun with coding*/
// 	int n; cin >> n;
// 	ll k; cin >>k;
// 	ll a[n+5];
// 	for (int i=0; i<n; i++){
// 		cin >>a[i];
// 	}
// 	ll cur = 0;
// 	int len = 0;
// 	unordered_map<ll, int> m;
// 	for (int i=0; i<n; i++){
// 		cur += a[i];
// 		if (cur == k){
// 			len = i+1;
// 		} else if (m.find(cur - k) != m.end()){
// 			len = max(len, i - m[cur - k]);
// 		}
// 		if (m.find(cur) == m.end()){
// 			m[cur] = i;
// 		}
// 	}
// 	cout << (len > 0?"YES" : "NO");
// }
void solve(){
	int n; cin >> n;
	ll k; cin >>k;
	ll a[n+5];
	for (int i=0; i<n; i++){
		cin >>a[i];
	}
	int last = 0, start = 0;
	ll cur = 0;
	bool check = false;
	for (int i=0; i<n; i++){
		cur += a[i];
		if (cur >= k){
			last = i;

			while (k < cur and start < last){
				cur -= a[start];
				start++;
			}

			if (cur == k){
				check = true;
				break;
			}
		}
	}
	cout << (check?"YES" : "NO");
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