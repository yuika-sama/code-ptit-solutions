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
	string s; 
	vector<string> v;
	while (cin >> s){
//		stringstream ss(s);
//		string r;
//		while (ss >> r){
			s = chuanhoa(s);
			v.push_back(s);
//		}
	}	
	v[0][0] = toupper(v[0][0]);
	for (int i = 1; i<v.size(); i++){
		bool check = false;
		if (v[i-1][v[i-1].size()-1] == '.' || v[i-1][v[i-1].size()-1] == '?' || v[i-1][v[i-1].size()-1] == '!'){
			v[i][0] = toupper(v[i][0]);
			v[i-1].pop_back();
			check = true;
		}
		cout << v[i-1];
		if (check) cout << endl; else cout << ' ';
	}
	if (v[v.size() - 1][v[v.size() - 1].size()-1] == '.' || v[v.size() - 1][v[v.size() - 1].size()-1] == '?' || v[v.size() - 1][v[v.size() - 1].size()-1] == '!'){
		v[v.size() - 1].pop_back();
	}
	cout << v[v.size() - 1];
}

