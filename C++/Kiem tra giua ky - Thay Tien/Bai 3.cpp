#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
bool palin(string s){
	for (int i=0; i<=s.size()/2;i++){
		if (s[i] != s[s.size()-i-1]){
			return false;
		}
	}
	return true;
}
main(){
	faster();
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int sum = 0;
		bool res = 0;
		for (int i=0; i<s.size(); i++) sum+=s[i] - '0';
		if (s[0]!='8' or s[s.size()-1]!='8'){
			cout << "NO" << endl;
			continue;
		}
		if (sum%10!=0){
			cout << "NO" << endl;
			continue;
		}
		if (palin(s) == false){
			cout << "NO" << endl;
			continue;
		}
		cout << "YES" << endl;
	}
}