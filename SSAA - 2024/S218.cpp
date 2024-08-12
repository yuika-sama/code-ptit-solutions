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
string delete_1(string s){
	stack<char> st;
	stack<int> id;
	int d[300];
	memset(d, 0, sizeof(d));
	for (int i=0; i<s.sz; i++){
		if (s[i] == ')'){
			bool flag = false;
			while (st.top() != '('){
				if (st.top() == '+' or st.top() == '-'){
					flag = true;
				}
				st.pop();
				id.pop();
			}
			if (!flag){
				d[id.top()] = 1;
				d[i] = 1;
			}
			st.pop();
			id.pop();
		} else {
			st.push(s[i]);
			id.push(i);
		}
	}
	string r = "";
	for (int i=0; i<s.sz; i++){
		if (d[i] == 0){
			r += s[i];
		}
	}
	return r;
} 
string delete_2(string s){
	stack<char> st;
	stack<int> id;
	int d[300];
	memset(d, 0, sizeof(d));
	for (int i = s.sz - 1; i>=0; i--){
		if (s[i] == '('){
			bool flag = true;
			if (i == 0 or s[i-1] != '-'){
				flag = false;
			}
			while (st.top() != ')'){
				st.pop();
				id.pop();
			}
			if (!flag){
				d[id.top()] = 1;
				d[i] = 1;
			}
			st.pop();
			id.pop();
		} else {
			st.push(s[i]);
			id.push(i);
		}
	}
	string r = "";
	for (int i=0; i<s.sz; i++){
		if (d[i] == 0){
			r += s[i];
		}
	}
	return r;
}
void solve(){
	/*hav fun with coding*/
	string s;
	getline(cin, s);
	string ss = resolve(s);
	//(a) -> a
	string s1 = delete_1(ss);
	//(a+b+c) -> a+b+c
	string s2 = delete_2(s1);
	cout << s2;
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