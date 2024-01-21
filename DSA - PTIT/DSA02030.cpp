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
char c;
int k;
string s;
void Try(char i){
	for (char j=i; j<=c; j++){
		s.pb(j);
		if (s.size() == k) cout << s << endl; else Try(j);
		s.pop_back();
	}
}
main(){
	faster();
	int t;
	t = 1;
	while (t--){
		cin >> c >> k;
		Try('A');
	}
}