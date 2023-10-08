#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
map<int, int> m;
main(){
	faster();
	vector<int> v;
	int n;
	while (cin >> n){
		if (!m[n]) v.push_back(n);
		m[n]++;
	}
	for (auto x:v){
		cout << x << ' ' << m[x] << endl;
	}
}