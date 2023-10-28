#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
string normal(string s){
	for (int i = 0; i<s.size(); i++){
		s[i] = tolower(s[i]);
	}
	return s;
}
main(){
	string s;
	while(getline(cin, s)){
		stringstream ss(s);
		vector<string> r;
		string t;
		while (ss>>t){
			t = normal(t);
			r.pb(t);
		}
		r[0][0] = toupper(r[0][0]);
		string last = "a";
		if (r.back() == "!" or r.back() == "?" or r.back() == "."){
			last = r.back();
			r.pop_back();
		}
		if (r[r.size()-1][r[r.size()-1].size()-1] != '.' and r[r.size()-1][r[r.size()-1].size()-1] != '!' and r[r.size()-1][r[r.size()-1].size()-1] != '?'){
			if (last!="a"){
				r[r.size()-1] += last;
			} else r[r.size()-1].pb('.');
		}
		for (auto i:r) cout << i << ' ';
		cout << endl;
	}
	
}