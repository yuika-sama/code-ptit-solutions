#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define pi pair<int, int>
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
string chuanhoa(string s){
	for (auto& i:s) i = tolower(i);
	s[0] = toupper(s[0]);
	return s;
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		string s;
		getline(cin >> ws, s);
		stringstream ss(s); 
		vector<string> v;
		while (ss>>s){
			s = chuanhoa(s);
			v.pb(s);
		}
		if (n==1){
			cout << v[v.size() - 1] << ' ';
			for (int i=0; i<v.size() - 1; i++) cout << v[i] << ' ';
		} else {
			for (int i=1; i<v.size(); i++) cout << v[i] << ' ';
			cout << v[0];
		}
		cout << endl;
	}
}