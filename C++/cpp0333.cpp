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
}string hoa(string r){
	string s = r;
	for (int i=0; i<s.size(); i++){
		if (s[i] >= 'a' && s[i] <= 'z'){
			s[i] -= 32;
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
	for (int i=0; i<res.size()-1; i++){
		res[i][0] -= 32;
		cout << res[i];
		if (i!=res.size()-2) cout << ' ';
	}
	res[res.size()-1] = hoa(res[res.size() - 1]);
	cout << ", " << res[res.size()-1];
}
