#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp pake_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
const ll c = 1e9+7;
main(){
	int n; cin >> n;
	ll r = 1;
	while (n--){
		r = (r%c * 2%c)%c;
	}
	cout << r;
}