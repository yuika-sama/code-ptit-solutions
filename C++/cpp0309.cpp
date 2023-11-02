#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster();
	int t; cin >> t;
	cin.ignore();
	while (t--){
		string s; 
		getline(cin,s);
		int d = 0;
		for (int i=0; i<s.size(); i++){
			if((s[i-1]==' ' || s[i-1]=='\t') && s[i] >= 'a' && s[i] <='z'){
				d++;
			}
		}
		cout << d+1 << endl;
	}
}
