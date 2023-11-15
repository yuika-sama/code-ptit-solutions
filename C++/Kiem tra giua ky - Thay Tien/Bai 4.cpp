#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
bool prime(ll n){
	if (n<2) return false;
	if (n==2) return true;
	if (n%2==0 or n%3==0) return false;
	for (int i=3; i<=sqrt(n); i+=2){
		if (n%i==0){
			return false;
		}
	}
	return true;
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		ll n; cin >> n;
		if (prime(n)) cout << "YES" << endl; else cout << "NO" << endl;
	}
}