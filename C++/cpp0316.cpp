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
//		int r = 0;
		while (s.size()>1){
			int r = 0;
			for (int i=0; i<s.size(); i++){
				r+=s[i] - '0';
			}
			s = to_string(r);
		}
		cout << (s=="9") << endl;
	}
}