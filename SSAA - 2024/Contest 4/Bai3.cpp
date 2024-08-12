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
vector<int> f;
void solve(){
	/*hav fun with coding*/
	map<ll, ll> m;
	ll n; cin >> n;
	for (auto i:f){
		if (n<=1){
			break;
		}
		while (n%i==0){
			n/=i;
			m[i]++;
		}
	}
	if (n>=2) m[n]++;
	for (auto i:m){
		if (i.sc >0) cout << i.fi sp i.sc << endl;
	}
}
main(){
	faster();
	int T = 1;
	vector<bool> v(1e7+5, true);
	v[0] = v[1] = false;
	for (int i=2; i*i<=1e7; i++){
		if (v[i] == true){
			for (int j = i*i; j<=1e7; j+=i){
				v[j] = false;
			}
		}
	}
	for (int i=2; i<=1e7; i++){
		if (v[i] == true){
			f.pb(i);
		}
	}
	cin >> T;
	while (T--){
		solve();
		cout << endl;
	}
	cerr << "Time elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
	return 0;
}