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
		int c = 0, l = 0;
		string s; getline(cin, s);
		stringstream ss(s);
		string r;
		while (ss >> r){
			if (r[r.size() - 1]%2==0) c++; else l++;
		}
		int n = c+l;	
		if (n%2==0 && c>l) cout << "YES"; else
		if (n%2==1 && c<l) cout << "YES"; else
		cout << "NO";
		cout << endl;
	}
}
