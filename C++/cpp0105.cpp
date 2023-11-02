#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define linedown cout << '\n';
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		string s; cin >> s;
		bool check = true;
		for (int i=0; i<s.size(); i++){
			if (s[i]!='0' && s[i]!='8' && s[i]!='6'){
				check = false;
				break;
			}
		}
		if (check) cout << "YES"; else cout << "NO";
		linedown;
	}
}
