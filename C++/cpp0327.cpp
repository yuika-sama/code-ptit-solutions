#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		long long res = 0;
		for (int i=0; i<s.size(); i++){
			res = (res*2 + s[i] - '0')%5;
		}
		if (res==0) cout << "Yes"; else cout << "No";
		cout << endl;
	}
}
