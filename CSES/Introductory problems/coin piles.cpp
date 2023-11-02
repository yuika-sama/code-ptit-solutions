#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp pake_pair
#define ld long double
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		ll a, b; cin >> a >> b;
//		2x + y = a
//		x + 2y = b
//		
//		2x + y = a
//		2x + 4y = 2b
//		
//		3y = 2b - a;
//		y = (2b - a) / 3;
//		-> x = b-2y
		ld y = (ld)(2*b -a)/3;
		ld x = b - 2*y;
		if (x == trunc(x) && y == trunc(y) && x>=0 && y>=0){
			cout << "YES" << endl;
		} else cout << "NO" << endl;
	}
}