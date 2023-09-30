#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define pb push_back
#define ll long long
#define lmao cout << "lmao"
using namespace std;
void permute(string s, int l, int r, set<string> &rs){ //quay lui
	if (l==r) rs.insert(s);
	else {
		for (int i=l; i<=r; i++){
			swap(s[l], s[i]);
			permute(s, l+1, r, rs);
			swap(s[l], s[i]);
		}
	}
}
main(){
	faster();
	string s;
	cin >> s;
	int n = s.size();
	set<string> r;
	permute(s, 0, n-1, r);
	cout << r.size() << endl;
	for (auto x:r){
		cout << x << endl;
	}
}