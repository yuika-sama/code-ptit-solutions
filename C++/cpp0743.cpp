#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster();
	int t; cin >> t;
	cin.ignore();
	while (t--){
		string s; 
		vector<string> v;
		getline(cin, s);
		stringstream  ss(s);
		string r;
		while (ss >> r){
			v.push_back(r);
		}
		for (int i=v.size()-1; i>=0; i--) cout << v[i] << ' ';
		cout << endl;
	}
}