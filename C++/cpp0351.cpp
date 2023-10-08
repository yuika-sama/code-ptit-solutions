#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n;
	    cin >> n;
	    cin.ignore();
	
	    vector<string> v;
	    string s, r;
	    getline(cin, s);
	    stringstream ss(s);
		while (ss>>r){
			for (auto &x : r){
				x = tolower(x);
			}
			r[0] = toupper(r[0]);
			cout << r << ' ';
			v.push_back(r);
		}
		if (n==1){
			for (int i=0; i<v.size()-1; i++){
//				cout << v[i] << ' ';
			}
//			cout << v[v.size() - 1] << endl;
		} else {
			for (int i=1; i<v.size(); i++){
//				cout << v[i] << ' ';
			}
//			cout << v[0] << endl;
		}
		cout << endl;
	}
}
