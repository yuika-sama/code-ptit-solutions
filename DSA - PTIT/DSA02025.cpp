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
int res;
string s[12], pm[12];
bool vs[12];
void Try(int i, int c){
	if (i>n){
		res = min(res, c);
		return;
	}
	for (int j=1; j<=n; j++){
		if (!vs[j]){
			vs[j] = true;
			pm[i] = s[j];
			int dd[255] = {};
			for (char i:pm[i]) dd[i]++;
			for (char i:pm[i-1]) dd[i]++;
			int d = 0;
			for (int k='A'; k<='Z'; k++){
				if (dd[k] == 2) d++;
			}
			if (c + d < res){
				Try(i+1, c+d);
			}
			vs[j] = false;
		}
	}
}
void solve(){
	/*hav fun with coding*/
	res = 1e9;
	memset(vs, false, sizeof(vs));
	cin >> n;
	for (int i=1; i<=n; i++){
		cin >> s[i];
	}
	Try(1, 0);
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
	return 0;
}