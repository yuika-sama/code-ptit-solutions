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


void solve(){
	/*hav fun with coding*/
	int n; cin >> n;
	int sum = 0;
	int a[n+5];
	for(int i=1; i<=n; i++){
		cin >> a[i];
		sum += a[i];
	}
	if (sum%2!=0){
		cout << "NO";
		return;
	}
	sum /= 2;
	int f[sum+5] = {};
	f[0] = 1;
	for (int i=1; i<=n; i++){
		for(int j=sum; j>=a[i]; j--){
			if (f[j] == 0 and f[j - a[i]] == 1){
				f[j] = 1;
			}
		}
	}
	cout << (f[sum] == 1 ? "YES" : "NO");
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