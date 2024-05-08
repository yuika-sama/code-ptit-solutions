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
int n, k;
string a[20];
bool vs[20];
set<string> r;
void Try(int i){
	for (int j=0; j<2; j++){
		vs[i] = j;
		if (i == n){
			int c = 0;
			for (int q=1; q<=n; q++){
				if (vs[q] == 1){
					c++;
				}
			}
			if (c == k){
				string t = "";
				for (int q=1; q<=n; q++){
					if (vs[q] == 1){
						t += a[q];
					}
				}
				r.ins(t);
			}
		} else Try(i+1);
	}
}
void solve(){
	/*hav fun with coding*/
	cin >> n >> k;
	memset(vs, false, sizeof(vs));
	r.clear();
	for (int i=1; i<=n; i++) cin >> a[i];
	Try(1);
	for (auto i:r){
		cout << i << endl;
	}
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