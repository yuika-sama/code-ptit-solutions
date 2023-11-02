#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		string s; cin >> s;
		for (int i=0; i<s.size()-2; i++){
			if (s[i]=='0' && s[i+1]=='8' && s[i+2]=='4'){
				s[i]=s[i+1]=s[i+2]='-';
			}
		}
		for (int i=0; i<s.size(); i++){
			if (s[i]!='-') cout << s[i];
		}
		cout << endl;
	}
}
