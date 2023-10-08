#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
bool palin(string s){
    for (int i=0; i<s.size()/2; i++){
    	if (s[i]!=s[s.size() - i - 1]){
    		return false;
		}
	}
	return true;
}
main(){
	faster();
	int t; cin >> t;
	cin.ignore();
	while (t--){
		string s; cin >> s;
		string n = "";
		for (int i=0; i<s.size(); i++){
			s[i] = toupper(s[i]);
		}
		for (int i=0; i<s.size(); i++){
			if (s[i] == 'A' || s[i]=='B' || s[i] == 'C'){
				n+='2';
			}
			if (s[i] == 'D' || s[i]=='E' || s[i] == 'F'){
				n+='3';
			}
			if (s[i] == 'G' || s[i]=='H' || s[i] == 'I'){
				n+='4';
			}
			if (s[i] == 'J' || s[i]=='K' || s[i] == 'L'){
				n+='5';
			}
			if (s[i] == 'M' || s[i]=='N' || s[i] == 'O'){
				n+='6';
			}
			if (s[i] == 'P' || s[i]=='Q' || s[i] == 'R' || s[i] == 'S'){
				n+='7';
			}
			if (s[i] == 'T' || s[i]=='U' || s[i] == 'V'){
				n+='8';
			}
			if (s[i] == 'W' || s[i]=='X' || s[i] == 'Y' || s[i] =='Z'){
				n+='9';
			}
		}
		if (palin(n)) cout << "YES" << endl; else cout << "NO" << endl;
	}
}
