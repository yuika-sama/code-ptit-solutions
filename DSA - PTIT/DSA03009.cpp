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
bool cmp(pii a, pii b){
	if (a.sc == b.sc) return a.fi > b.fi;
	return a.sc > b.sc;
}
void solve(){
	/*hav fun with coding*/
	int n; cin >> n;
	vector<pii> v(n);
	int x;
	int m = -1e9;
	for (auto& i:v){
		cin >> x >> i.fi >> i.sc;
		m = max(m, i.fi);
	}
	sort(v.begin(), v.end(), cmp);
	vector<bool> dd(m+1, false);
	pii res = {0, 0};
	for (int i=0; i<n; i++){
		for (int j = v[i].fi; j>=1; j--){
			if (!dd[j]){
				dd[j] = true;
				res.fi++;
				res.sc+=v[i].sc;
				break;
			}
		}
	}
	cout << res.fi << ' ' << res.sc;

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