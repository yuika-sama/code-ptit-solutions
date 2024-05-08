#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
#define MAX 20
using namespace std;
int calclate(int n, ll k){
	ll x = pow(2, n-1);
	if (k==x) return n;
	if (k<x) return calclate(n-1, k);
	return calclate(n-1, k-x);
}
main(){
	faster();
	ll f[52];
	f[1] = 1;
	for (int i=2; i<=52; i++){
		f[i] = f[i-1]*2;
	}
	int t; 
	cin >> t;
	while (t--){
		int n;
		ll k;
		cin >> n >> k;
		// for (int i=n; i>=1; i--){
		// 	if (k>f[i]) k-= f[i];
		// 	else if (k==f[i]){
		// 		cout << i << endl;
		// 		break;
		// 	}
		// }
		cout << calclate(n, k) << endl;
		cout << __builtin_ctzll(k) + 1 << endl;
	}
}