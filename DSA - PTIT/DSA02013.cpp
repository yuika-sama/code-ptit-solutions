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
vector<bool> v(205, true);
vector<int> f;
void naive(){
	v[0] = v[1] = false;
	for (int i=2; i*i<=200; ++i){
		if (v[i]){
			for (int j = i*i; j<=200; j+=i){
				v[j] = false;
			}
		}
	}
	for (int i=2; i<=200; ++i){
		if (v[i]){
			f.pb(i);
		}
	}
}
int n, p, s;
vector<vector<int>> res;
void Try(int sum, int position, vector<int> v){
	if (v.size() == n and sum == s){
		res.pb(v);
	}
	for (int i=position; i<f.size(); ++i){
		if (sum + f[i] <= s){
			v.pb(f[i]);
			Try(sum + f[i], i+1, v);
			v.pop_back();
		} else return;
	}
}
void solve(){
	/*hav fun with coding*/
	res.clear();
	cin >> n >> p >> s;

	int index = lower_bound(f.begin(), f.end(), p) - f.begin();
	if (f[index] == p) index++;
	Try(0, index, {});

	cout << res.size() << endl;
	for (auto i:res){
		for (auto j:i){
			cout << j << ' ';
		}
		cout << endl;
	}
}
main(){
	faster();
	naive();
	int T = 1;
	cin >> T;
	while (T--){
		solve();
		// cout << endl
	}
	return 0;
}