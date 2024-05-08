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
	int n; cin >> n;
	int l, H;
	vector<int> w, h, v;
	v.assign(n+1, 0);
	for (int i=0; i<n; i++){
		cin >> l;
		w.pb(l);
	}
	for (int i=0; i<n; i++){
		cin >> H;
		h.pb(H);
	}
	pii f[n+5] = {{0, 0}};
	int ff[n+5] = {0};
	f[0] = {h[0], w[0]};
	ff[0] = 0;
	for (int i=1; i<n; i++){
		if (h[i] > h[i-1]){
			f[i] = {h[i], w[i]};
			ff[i] = ff[i-1] + h[i-1];
		} else {
			f[i] = f[i-1];
			ff[i] = h[i];
		}
	}
	for (int i=0; i<n; i++){
		if (i == 0) v[i] = w[i]*h[i];
		else if (h[i] > h[i-1]){
			v[i] = w[i]*h[i];
			if (f[i].fi > h[i]){
				v[i] -= w[i] * f[i].sc;
			}
			v[i] -= 2*ff[i];
		}
		else {
			v[i] = h[i] * (w[i] - w[i-1] - 1);
		}
	}
	int q; cin >> q;
	while (q--){
		ll k; cin >> k;
		int d = -1;
		for (auto i:v){
			if (k>0){
				k -= i;
				d++;
			} else if (k <= 0){
				break;
			}
		}
		cout << d << endl;	
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