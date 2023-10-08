#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	string s; cin >> s;
	for (int i=0; i<s.size(); i++){
		if (s[i] >= 'A' && s[i]<='Z') s[i]+=32;
	}
	vector<char> res;
	for (int i=0; i<s.size(); i++){
		if (s[i]!='a' && s[i]!='u' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='y'){
			res.push_back('.');
			res.push_back(s[i]);
		}
	}
	for (int i=0; i<res.size(); i++) cout << res[i];
}
