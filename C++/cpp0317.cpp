#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
bool chan(string s){
	for (int i=0; i<s.size(); i++){
		if (s[i]%2!=0)
			return false;
	}
	return true;
}
bool palin(string s){
	for (int i=0; i<s.size()/2; i++){
		if (s[i]!=s[s.size()-i-1]){
			return false;
		}
	}
	return true;
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		string s; cin >> s;
		if (chan(s) && palin(s)) cout <<"YES\n"; else cout << "NO\n";
	}
}
