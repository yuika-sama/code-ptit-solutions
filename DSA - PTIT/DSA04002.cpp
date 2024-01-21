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
const ll c = 1e9+7;
ll rev(ll n){
	ll t = 0;
	while (n>0){
		t = t*10 + n%10;
		n/=10;
	}
	return t;
}
ll factorial(ll n, ll k){
	if (k==0) return 1;
	ll tmp = factorial(n, k/2);
	if (k%2==0) return (tmp*tmp)%c;
	return (n*((tmp*tmp)%c))%c;
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		ll n;
		cin >> n;
		ll k; 
		k = rev(n);
		cout << factorial(n, k) << endl;
	}
}