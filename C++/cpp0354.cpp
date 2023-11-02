#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster();
	int t; cin >> t;
	//cin.ignore();
	while (t--){
		string s; 
		cin >> s;
		for (int i=0; i<s.size(); i++){
			if (s[i]!='0'){
				int d = 1;
				for (int j=i+1; j<s.size(); j++){
					if (s[i] == s[j]){
						d++;
						s[j] = '0';
					}
				}
				cout << s[i] << d;
			}
		}
		cout << endl;
	}
}

