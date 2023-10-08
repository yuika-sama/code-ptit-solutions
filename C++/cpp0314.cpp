#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	int n; cin >> n;
	cin.ignore();
	string s;
	set<string> res;
	for (int i=0; i<n; i++){
		getline(cin, s);
		res.insert(s);
	}
	cout << res.size();	
}
