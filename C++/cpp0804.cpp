#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	fstream in;
	in.open("VANBAN.in");
	set<string> m;
	string t;
	string s = "";
	while (getline(in, t)){
		s+=t + ' ';
	}
	in.close();
	stringstream ss(s);
	string r;
	while (ss>>r){
		for (int i=0; i<r.size(); i++){
			r[i] = tolower(r[i]);
		}
//		cout << r << ' ';
		m.insert(r);
	}
	for(auto x:m){
		cout << x << endl;
	}
}