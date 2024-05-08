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


void solve(){
	/*hav fun with coding*/
	string s; cin >> s;
	stack<string> st;
	for (int i=0; i<s.size(); i++){
		if (s[i] == '+' or s[i] == '-' or s[i] == '*' or s[i] == '/'){
			string a = st.top(); st.pop();
			string b = st.top(); st.pop();
			string c = s[i] + b + a;
			st.push(c);
		} else {
			string x = "";
			x += s[i];
			st.push(x);
		}
	}
	cout << st.top();
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