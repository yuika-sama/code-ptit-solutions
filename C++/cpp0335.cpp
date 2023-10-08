#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
long long cv(string s){
    long long n = 0;
    for (int i=0; i<s.size(); i++){
        n = n*10 + s[i]-'0';
    }
    return n;
}
main(){
	faster();
	int t; cin >> t;
	cin.ignore();
	while (t--){
		string s; cin >> s;
		long long mx = -1;
		string n = "";
		for (int i=0; i<s.size(); i++){
// 			string n = "";
			if (isdigit(s[i])) n+=s[i]; else {
				long long x = cv(n);
				mx = max(mx, x);
				n = "";
			}
		}
		cout << mx << endl;
	}
}
