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
int get_priority(char s){
	if (s == '+' or s == '-') return 1;
	if (s == '*' or s == '/') return 2;
	if (s == '^') return 3;
	return 0;
}

void solve(){
	/*hav fun with coding*/
	string s; cin >> s;
	stack<char> st;
	string res = "";
	for (int i=0; i<s.size(); i++){
		if (isalpha(s[i])){
			// st.push(s[i]);;
			res += s[i];
		} 
		else if (s[i] == '(') st.push(s[i]);
		else if (s[i] == ')'){
			while (!st.empty() and st.top() != '('){
				res += st.top();
				st.pop();
			}
			if (st.top() == '(') st.pop();
		} else {
			while (!st.empty() and get_priority(s[i]) <= get_priority(st.top())){
				res += st.top();
				st.pop();
			}
			st.push(s[i]);
		}
	}
	while (!st.empty() and st.top() != '('){
		res += st.top();
		st.pop();
	}
	cout << res;
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