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
		int f[100] = {0};
		for (int i=0; i<s.size(); i++){
			f[s[i]]++;
		}
		for (int i=0; i<s.size(); i++){
			if (f[s[i]] == 1){
				cout << s[i];
				f[s[i]] = 0;
			}
		}
		cout << endl;
	}
}
