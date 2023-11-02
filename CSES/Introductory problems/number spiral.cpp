#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp pake_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		ll y, x;
		cin >> x >> y;
		if (y>x){
			if (y%2==1){
				ll r = y*y;
				cout << r - x + 1 << endl;
			} else {
				ll r = (y-1)*(y-1)+1;
				cout<< r+x-1 << endl;
			}
		} else {
			if (x%2==0){
				ll r = x*x;
				cout << r - y + 1 << endl;
			} else {
				ll r = (x-1)*(x-1)+1;
				cout<< r+y-1 << endl;
			}
		}
	}
}