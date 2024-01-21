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
ll lcm(ll a, ll b){
	return (a*b)/__gcd(a,b);
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		string s; cin >> s;
		if (s.size()%2==1) cout << "INVALID" << endl;
		else {
			ll l = 0, r = 0;
			for (int i=0; i<s.size()/2; i++){
				l = l*10 + s[i] - '0';
				r = r*10 + s[i + s.size()/2] - '0';
			}
			cout << lcm(l, r) << endl;
		}
	}
}