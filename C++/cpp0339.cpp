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
		int res = s.size();
		for (int i=0; i<s.size()-1; i++){
			for (int j=i+1; j<s.size(); j++){
				if (s[i] == s[j]){
					res++;
				}
			}
		}
		cout << res << endl;
	}
}
