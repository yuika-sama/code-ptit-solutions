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
#define sqr(x) x*x
#define fi first
#define sc second
#define pb push_back
#define eb emplace_back
#define ins insert
#define sz size()
#define len length
#define mp make_pair
#define al(v) (v).begin(), (v).end()
#define sp << ' ' <<
#define endl '\n'
#define precision(x) setprecision(x) << fixed
#define nekonooke {cout << "Ame nara ashita wa hareru darou~"}
const int oo = 1e9+7;

//end of template
bool check(string &s){
	int f[10] = {};
	for (auto &i:s){
		f[i-'0']++;
		if (f[i-'0'] > 1) return false;
	}
	return true;
}

// void solve(){
// 	/*hav fun with coding*/
// 	int l, r;
// 	cin >> l >> r;

// }
main(){
	faster();
	int T = 1;
	vi v;
	queue<string> q;
	q.push("");
	int tmp;
	bool ok = true;
	string top, cur;
	while (ok){
		top = q.front(); q.pop();
		if (top == "0") continue;
		for (int i=0; i<=5; i++){
			cur = top + to_string(i);
			if (!check(cur)) continue;
			q.push(cur);
			tmp = 0;
			for (auto j:cur){
				tmp = tmp*10 + j - '0';
			}
			if (tmp > 1e5){
				ok = false;
				break;
			}
			v.pb(tmp);
		}
	}
	cin >> T;
	int x,y,l,r;
	while (T--){
		// solve();
		cin >> l >> r;
		x = lower_bound(al(v), l) - v.begin();
		y = lower_bound(al(v), r) - v.begin();
		if (y >= v.sz or v[y] > r) --y;
		cout << y-x+1;
		cout << endl;
	}
	cerr << "Time elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
	return 0;
}