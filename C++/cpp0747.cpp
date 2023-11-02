#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define sz size()
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		string s; cin >> s;		
		int zero = 0, res = 0;
		for (int i=s.sz - 1; i>=0; i--){
			zero += (s[i] == '0' ? 1 : 0);
			if (s[i] == '1'){
				if (zero > 1){
					res += 3;
					zero -= 2;
				}
			}
		}
		cout << res << endl;
	}
}