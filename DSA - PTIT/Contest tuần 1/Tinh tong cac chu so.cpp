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
		string ss;
		int sum = 0;
		for (auto i:s){
			if (isdigit(i)){
				sum += i-'0';
			} else ss+=i;
		}
		sort(ss.begin(), ss.end());
		cout << ss << sum << endl;
	}
}