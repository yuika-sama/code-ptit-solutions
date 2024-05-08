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
	string a; cin >> a;
	string s[1005];
	for (int i=0; i<a.size(); i++){
		s[i] += a[i];
	}
	stack<int> st;
	stack<int> st1;
	string res = "";
	for (int i=0; i<a.size(); i++){
		if (s[i] == "("){
			st.push(i);
		} else if (s[i] == ")"){
			bool x = false;
			if (!st.empty()){
				s[i] = "1";
				s[st.top()] = "0";
				st.pop();
				x = true;
			} else st1.push(i);
		}
	}
	while (!st1.empty()){
		// res = res + "-1";
		s[st1.top()] = "-1";
		st1.pop();
	}
	while (!st.empty()){
		s[st.top()] = "-1";
		st.pop();
	}
	for (int i=0; i<a.size(); i++){
		cout << s[i];
	}
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