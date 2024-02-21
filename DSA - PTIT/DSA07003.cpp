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
	string s;
	getline(cin, s);
	stack<char> st;
	for (int i=0; i<s.sz; i++){
		if (s[i] != ')'){
			st.push(s[i]);
		} else {
			bool check = false;
			while (!st.empty()){
				char c = st.top(); st.pop();
				if (c == '+' || c == '-' || c == '*' || c == '/'){
					check = true; //cap ngoac dung
				}
				if (c == '('){
					break;
				}
			}
			if (!check){
				cout << "Yes";
				return;
			}
		}
	}
	cout << "No";
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
	return 0;
}