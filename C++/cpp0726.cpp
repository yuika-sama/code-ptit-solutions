#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp pake_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
ll solve(ll a, ll b, ll c){ //chat nhi phan
	if (b==0) return 0;
	if (b==1) return a%c;
	ll t = solve(a, b/2, c);
	ll r = 2*t%c;
	if (b%2==1) return (r+a)%c;
	return r;
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		long long a, b, c;
		cin >> a >> b >> c;
		cout << solve(a,b,c) << endl;
	}
}