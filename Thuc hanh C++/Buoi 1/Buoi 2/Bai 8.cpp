#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
bool check(vector<string> &vs){
	if (vs.size()!=4) return false;
	for (auto x:vs){
		ll tmp = 0;
		for (auto j:x){
			if (isdigit(j)==false) return false;
			tmp = tmp*10 + j - '0';
		}
		if (tmp<0 or tmp>255) return false;
	}
	return true;
}
main(){
	faster();
	int t;
	cin >> t;
	string s;
	while (t--){
		cin >> s;
		vector<string> vs;
		stringstream ss(s);
		while (getline(ss, s, '.')){
			vs.pb(s);
		}
		if (check(vs)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}