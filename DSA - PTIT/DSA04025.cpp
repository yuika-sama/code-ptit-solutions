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
ll f[2][2], d[2][2];
void mult(ll a[2][2], ll b[2][2]){
	ll x = (a[0][0] * b[0][0] % c + a[0][1] * b[1][0] % c) % c;
    ll y = (a[0][0] * b[0][1] % c + a[0][1] * b[1][1] % c) % c;
    ll z = (a[1][0] * b[0][0] % c + a[1][1] * b[1][0] % c) % c;
    ll t = (a[1][0] * b[0][1] % c + a[1][1] * b[1][1] % c) % c;
    
    f[0][0] = x;
    f[0][1] = y;
    f[1][0] = z;
    f[1][1] = t;
}
void poww(ll f[2][2], ll n){
	if (n<=1) return;
	poww(f, n/2);
	mult(f, f);
	if (n%2==1) mult(f, d);
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		ll n; cin >> n;
		f[0][1] = f[1][0] = f[0][0] = 1;
		d[0][1] = d[1][0] = d[0][0] = 1;
		f[1][1] = d[1][1] = 0;
		poww(f, n-1);
		cout << f[0][0] << endl;
	}
}