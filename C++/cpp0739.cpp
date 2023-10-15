#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp pake_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		string s; cin >> s;
		vector<int> v;
		int pos = 0;
		if (s[0] == 'I'){
			v.pb(1);
			v.pb(2);
			pos = 1;
		} else {
			v.pb(2);
			v.pb(1);
			pos = 0;
		}
		int Min = 3;
		for (int i=1; i<s.size(); i++){
			if (s[i] == 'I'){
				v.pb(Min);
				pos = i+1;
			} else {
				v.pb(v[i]);
				for (int j=pos; j<=i; j++){
					v[j]++;
				}
			}
			Min++;
		}
		for (auto x:v) cout << x;
		cout << endl;
	}
}