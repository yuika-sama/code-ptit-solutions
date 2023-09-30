#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	fstream in1, in2;
	in1.open("DATA1.in");
	in2.open("DATA2.in");
	set<string> se1, se2;
	string s;
	while (in1>>s){
		for (int i=0; i<s.size(); i++){
			s[i] = tolower(s[i]);
		}
		se1.insert(s);
	}
	in1.close();
	while (in2>>s){
		for (int i=0; i<s.size(); i++){
			s[i] = tolower(s[i]);
		}
		se2.insert(s);
	}
	in2.close();
	map<string, int> m;
	for (auto x:se1) m[x]++;
	for (auto x:se2) m[x]++;
	for (auto x:m) cout << x.first << ' ';
	cout << endl;
	for (auto x:m){
		if (x.second > 1){
			cout << x.first << ' ';
		}
	}
}