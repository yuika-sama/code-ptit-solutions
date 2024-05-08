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
string s;
int x[16];
vector<string> res;
void Try(int i){
	for (int j=0; j<2; j++){
		x[i] = j;
		if (i == n-1){
			string tmp = "";
			for (int i=0; i<n; i++){
				if (x[i] == 1){
					tmp += s[i];
				}
			}
			// cout << ' ';
			res.pb(tmp);
		} else Try(i+1);
	}
}
void solve(){
	/*hav fun with coding*/
	memset(x, 0, sizeof(x));
	res.clear();
	cin >> n;
	cin >> s;
	Try(0);
	sort(res.begin(), res.end());
	for (auto i:res) cout << i << ' ';
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