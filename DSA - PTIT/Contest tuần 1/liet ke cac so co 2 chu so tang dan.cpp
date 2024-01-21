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
	string s; cin >> s;
	set<int> se;
	for (int i=0; i<s.size()-1; i+=2){
		int x = (s[i]-'0')*10 + s[i+1] - '0';
		if (x>=10) se.insert(x);
	}
	for (auto i:se) cout << i << ' ';
}