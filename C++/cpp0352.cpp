#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
string chuanhoa(string s){
	for (int i=0; i<s.size(); i++){
		s[i] = tolower(s[i]);
	}
	return s;
}
main(){
	faster();
	int t; cin >> t;
	cin.ignore();
	vector<string> res;
	map<string, int> vs;
	vs.clear();
	while (t--){
		string s, r; 
		vector<string> v;
		getline(cin, s);
		stringstream  ss(s);
		while (ss >> r){
			r = chuanhoa(r);
			v.push_back(r);
		}
		string x = "";
		x+= v[v.size() - 1];
		for (int i=0; i<v.size()-1; i++){
			x+= v[i][0];
		}
		vs[x]++;
		if (vs[x]>1) x+=(char)(vs[x] + '0');
		res.push_back(x);
	}
	for (int i=0; i<res.size(); i++) cout << res[i] << "@ptit.edu.vn" << endl;
}