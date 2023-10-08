#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
string chuanhoa(string s){
	for (int i=0; i<s.size(); i++){
		s[i] = tolower(s[i]);
	}
	s[0] = toupper(s[0]);
	return s;
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int k; cin >> k;
		cin.ignore();
		string s; getline(cin, s);
		stringstream ss(s);
		string r;
		vector<string> v;
		while (ss>>r){
			r = chuanhoa(r);
			v.push_back(r);
		}
		if (k==1){
			cout << v[v.size() - 1] << ' ';
			for (int i=0; i<v.size()-1; i++){
				cout << v[i] << ' ';
			}
		} else {
			for (int i=1; i<v.size(); i++){
				cout << v[i] << ' ';
			}
			cout << v[0];
		}
		cout << endl;
	}
}
