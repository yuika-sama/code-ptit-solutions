#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O2")
#pragma GCC target("avx,avx2,fma")
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define fi first
#define sc second
#define pb push_back
#define eb emplace_back
#define ins insert
#define sz size()
#define len length
#define mp make_pair
#define sp << ' ' <<
#define endl '\n'
#define precision(x) setprecision(x) << fixed
#define keocon {cout << "I used to be your Tinkle Bell, we are too old for fairytales, my love."}


//end of template


void solve(){
	/*hav fun with coding*/
	int k;
	string s;
	cin >> k >> s;
	for (int i=0; i<s.len(); i++){
		if (k == 0) break;
		char c = *max_element(s.begin() + i + 1, s.end());
		if (c <= s[i]) continue;
		string new_s = s;
		for (int j = i+1; j<=s.len(); j++){
			if (s[j] == c){
				string temp = s;
				swap(temp[i], temp[j]);
				new_s = max(new_s, temp);
			}
		}
		s = new_s;
		k--;
	}
	cout << s;
}
main(){
	faster();
	int T = 1;
	cin >> T;
	while (T--){
		solve();
		cout << endl;
	}
	return 0;
}