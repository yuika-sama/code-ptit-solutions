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
int prio(char s){
	if (s == '*' or s == '/') return 3;
	if (s == '+' or s == '-') return 2;
	return 0;
}
bool isop(string s){
	return (s == "+" or s == "-" or s == "*" or s == "/");
}
ll cal(ll a, ll b, string c){
	if (c == "+") return a+b;
	if (c == "-") return a-b;
	if (c == "*") return a*b;
	if (c == "/") return a/b;
	return 0;
}
ll to_num(string s){
	ll num = 0;
	for (auto i:s){
		num = num*10 + i - '0';
	}
	return num;
}
void solve(){
	/*hav fun with coding*/
	string s; cin >> s;
	stack<char> st;
	vector<string> v;
	for (int i=0; i<s.sz; i++){
		if (isdigit(s[i])){
			string num = "";
			while (isdigit(s[i])){
				num+=s[i];
				i++;
			}
			i--;
			v.pb(num);
		}
		else if (s[i] == '(') st.push(s[i]);
		else if (s[i] == ')'){
			while (st.top() != '('){
				v.pb(string(1, st.top()));
				st.pop();
			}
			st.pop();
		} else {
			while (!st.empty() and prio(s[i]) <= prio(st.top())){
				v.pb(string(1, st.top()));
				st.pop();
			}
			st.push(s[i]);
		}
	}

	while (!st.empty()){
		v.pb(string(1, st.top()));
		st.pop();
	}

	stack<ll> st1;
	for (int i=0; i<v.sz; i++){
		if (isop(v[i])){
			ll y = st1.top(); st1.pop();
			ll x = st1.top(); st1.pop();
			st1.push(cal(x, y, v[i]));
		} else st1.push(to_num(v[i]));
	}
	cout << st1.top();
}
main(){
	faster();
	int T = 1;
	cin >> T;
	while (T--){
		solve();
		cout << endl;
	}
	cerr << "Time elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
	return 0;
}