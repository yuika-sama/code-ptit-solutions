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
string tmp = "";
vector<string> id, num;
bool vs[1000] = {0};
void Try1(int i) {
	for (int c = 'A'; c <= 'A' + n - 1; c++)
		if (!vs[c]) {
			vs[c] = 1;
			tmp += c;
			if (i == n) {
				id.push_back(tmp);
			}
			else Try1(i + 1);
			tmp.pop_back();
			vs[c] = 0;
		}
}
void Try2(int i) {
	for (int j = 1; j <= n; j++) {
		tmp += to_string(j);
		if (i == n) {
			num.push_back(tmp);
		}
		else Try2(i + 1);
		tmp.pop_back();
	}
}
void solve(){
	/*hav fun with coding*/
	cin >> n;
	Try1(1);
	Try2(1);
	for (auto i:id){
		for (auto j:num){
			cout << i << j << endl;
		}
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