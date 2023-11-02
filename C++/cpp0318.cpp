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
		string s; cin >> s;
		vector<int> v;
		for (int i=5; i<s.size(); i++){
			if (s[i]!='.'){
				v.push_back(s[i] - '0');
			}
		}
		bool all = true, sorted = true, group = false, all68 = true;
		for (int i=0; i<v.size()-1; i++){
			if (v[i]!=v[i+1]) all = false;
			if (v[i] >= v[i+1]) sorted = false;
			if (v[i] != 6 && v[i]!=8) all68 = false;
		}
		if (v[0]==v[1] && v[1] == v[2]){
			if (v[2]!=v[3]){
				if (v[3] == v[4]){
					group = true;
				}
			}
		}
		if (all || sorted || group || all68){
			cout << "YES";
		} else cout << "NO";
		cout << endl;
	}
}
