#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	fstream in;
	in.open("DATA.in");
	int n, m, x;
	in >> n >> m;
	set<int> s1,s2;
	for (int i=0; i<n; i++){
		in >> x;
		s1.insert(x);
	}
	for (int i=0; i<m; i++){
		in >> x;
		s2.insert(x);
	}
	in.close();
	map<int, int> mp;
	for (auto x:s1) mp[x]++;
	for (auto x:s2) mp[x]++;
	for (auto x:mp){
		if (x.second == 2){
			cout << x.first << ' ';
		}
	}
}