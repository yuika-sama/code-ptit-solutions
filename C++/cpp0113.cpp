#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	int t; cin >> t;
	while (t--){
		string s; cin >> s;
		int n = s.size();
		if (s[n-1] == '6' && s[n-2] == '8') cout << 1 << endl; else cout << 0 << endl;
	}
}
