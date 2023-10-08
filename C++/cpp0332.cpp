#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
string chuanhoa(string r){
	string s = r;
	for (int i=0; i<s.size(); i++){
		if (s[i] >= 'A' && s[i] <= 'Z'){
			s[i] += 32;
		}
	}
	return s;
}
main(){
	stringstream ss;
	string s; 
	getline(cin, s);
	s = chuanhoa(s);
	ss << s;
	vector<string> res;
	while (!ss.eof()){
		string r;
		ss >> r;
		res.push_back(r);
	}
	cout << res[res.size()-1];
	for (int i=0; i<res.size()-1; i++){
		cout << res[i][0];
	}
	cout << "@ptit.edu.vn";
}
