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
		int c = 0, l = 0;
		for (int i=0; i<s.size(); i++){
			if (i%2==0){
				c+=s[i]-'0';
			} else l+=s[i]-'0';
		}
		if (abs(c-l)%11==0) cout << 1; else cout << 0;
		cout << endl;
	}
}
