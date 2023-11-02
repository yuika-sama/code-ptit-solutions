#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster();
	int t;cin >> t;
	cin.ignore();
	while (t--){
		string s; cin >> s;
		int k; cin >> k;
		int res = 0;
		for (int i=0; i<s.size(); i++){
			bool dd[30] = {0};
			int d = 0;
			for (int j = i; j<s.size(); j++){
				if (dd[s[j] - 'a'] == 0){
					dd[s[j] - 'a'] = 1;
					d++;
				}
				if (d==k){
					res++;
				} else if (d>k) break;
			}
		}
		cout << res << endl;
	}
}
