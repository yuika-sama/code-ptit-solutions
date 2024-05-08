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
int n;
int x[11];
vector<string> v;
void Try(int i){
	for (int j=0; j<2; j++){
		x[i] = j;
		if (i==n){
			string t = "";
			for (int i=1; i<=n; i++){
				t += to_string(x[i]);
			}
			v.pb(t);
		} else Try(i+1);
	}
}
void solve(){
	/*hav fun with coding*/
	string s;
	cin >> s;
	n = s.size();
	vector<string> a;
	a.pb("0");
	a.pb("1");
	for (int i=2; i<=n; i++){
		int l = a.size();
		for (int j = l-1; j>=0; j--){
			a.pb(a[j]);
		}
		for (int j=0; j<l; j++){
			a[j] = '0' + a[j];
		}
		for (int j=l; j<a.size(); j++){
			a[j] = '1' + a[j];
		}
	}
	memset(x, 0, sizeof(x));
	v.clear();
	Try(1);
	for (int i=0; i<a.size(); i++){
		if (a[i] == s){
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