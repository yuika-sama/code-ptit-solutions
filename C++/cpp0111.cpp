#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		bool check = true;
		string s; cin >> s;
		for (int i=0; i<s.size()-1; i++){
			if (s[i] != s[i+1]+1 && s[i] != s[i+1]-1){
				check = false;
				break;
			}
		}
		if (check) cout << "YES"; else cout << "NO";
		cout << endl;
	}
}
