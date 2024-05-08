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
//ac with 2s or slower??
int stt = 1;
void solve(){
	/*hav fun with coding*/
	int n; cin >> n;
	ll a[n+5];
	ll f[n+5];
	f[0] = 0;
	for (int i=1; i<=n; i++){
		cin >> a[i];
		f[i] = f[i-1] + a[i];
	}

	ll s = f[n];
	vector<ll> v;
	int i = sqrt(s);
	if (i*i == s) v.pb(i);
	for (int i=1; i<=sqrt(s); i++){
		if (s%i==0){
			v.pb(i);
			v.pb(s/i);
		}
	}

	sort(v.begin(), v.end());
	for (int i=0; i<v.size(); i++){
		int id = 0;
		int cnt = 0;
		for (int j=1; j<=n; j++){
			if (f[j] - f[id] > v[i]) break;
			if (f[j] - f[id] == v[i]){
				cnt += (j - id);
				id = j;
			}
		}
		if (cnt == n){
			cout << v[i];
			return;
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