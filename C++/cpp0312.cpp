#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		string s;
		cin >> s;
		int k; cin >> k;
		int f[105] = {0};
		int cnt = 0;
		for (auto x : s){
			f[x-'a']++;
		}
		for (int i=0; i<26; i++){
			if (f[i] == 0){
				cnt++;
			}
		}
		cout << (s.size()>=26 && k>=cnt) << endl;
	}
}
