#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define pi pair<int, int>
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
void show(stack<int> s){
	vector<int> v;
	while (!s.empty()){
		v.pb(s.top());
		s.pop();
	}
	reverse(v.begin(), v.end());
	for (auto i:v){
		cout << i << ' ';
	}
	cout << endl;
}
main(){
	faster();
	string s;
	stack<int> st;
	while (getline(cin, s)){
		if (s == "show"){
			if (st.empty()) cout << "empty" << endl; else {
				show(st);
			}
		} else if (s == "pop"){
			if (st.empty()) cout << "empty" << endl; else {
				st.pop();
			}
		} else {
			stringstream ss(s);
			ss >> s;
			int n;
			ss >> n;
			st.push(n);
		}
	}
}