#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	string s; getline(cin,s);
	string t; cin >> t;
	string tmp;
	stringstream ss(s);
	while (ss>>tmp){
		if (tmp!=t) cout << tmp << ' ';
	}
}
