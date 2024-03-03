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
//ac

//end of template
string s;
int x[15];
int n;
bool vs[15];
set<int> v;
int convert(string t){
	int k = 0;
	reverse(t.begin(), t.end());
	for (int i=0; i<t.size(); i++){
		k = k*10 + (t[i] - '0');
	}
	return k;
}
void Try(int i){
	for (int j=1; j<=n; j++){
		if (!vs[j]){
			vs[j] = true;
			x[i] = j;
			if (i == n){
				string t = "";
				for (int k = 1; k <= n; k++){
					t += s[x[k]];
				}
				v.insert(convert(t));
			} else Try(i+1);
			vs[j] = false;
		}
	}
}
void solve(){
	cin >> s;
	n = s.size();
	s = "." + s;
	memset(vs, false, sizeof(vs));
	for (int i=1; i<=n; i++){
		x[i] = i;
	}
	v.clear();
	Try(1);
	for (auto i:v){
		cout << i << endl;
	}
}
main(){
	faster();
	int T = 1;
	cin >> T;
	while (T--){
		solve();
		// cout << endl;
	}
	return 0;
}