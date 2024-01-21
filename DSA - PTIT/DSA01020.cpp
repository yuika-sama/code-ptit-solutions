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
main(){
	faster();
	int t; cin >> t;
	while (t--){
		string s; cin >> s;
		int n = s.size();
		bool check = true;
		for (int i=n-1; i>=0; i--){
			if (s[i] == '1'){
				s[i] = '0';
				check = false;
				break;
			} else {
				s[i] = '1';
			}
		}
		if (check){
			for (int i=0; i<n; i++) cout << '1';
		} else {
			cout << s;
		}
		cout << endl;
	}
}