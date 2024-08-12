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
string resolve(string s){
	string r;
	for (auto i:s){
		if (i != ' ') r.pb(i);
	}
	return r;
}
void solve(){
	/*hav fun with coding*/
	string s;
	getline(cin, s);
	s = resolve(s);
	s = '+' + s;
	stack<int> st;
	vector<string> v;
	for (int i=1; i<s.sz; i++){
		if (s[i] != ')') st.push(i);
		else {
			while (!st.empty() and s[st.top()] != '(') st.pop();
			if ((st.top() > 0 and s[st.top()-1] != '-') or st.top() == 1) {
				s[st.top()] = 0;
				s[i] = 0;
			}
			st.pop();
		}
	}
	cout << s;

}

main(){
	faster();
	int T = 1;
	cin >> T;
	cin.ignore();
	while (T--){
		solve();
		cout << endl;
	}
	cerr << "Time elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
	return 0;
}