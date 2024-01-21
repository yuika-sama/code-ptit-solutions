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
const int c = 1e9+7;
ll factorial(int n, ll k){
	if (k==0) return 1;
	if (k==1) return n;
	ll tmp = factorial(n, k/2);
	ll tmp2 = ((tmp%c) * (tmp%c))%c;
	if (k%2==1) return ((tmp2%c)*(n%c))%c;
	return tmp2;
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n;
		ll k; 
		cin >> n >> k;
		cout << factorial(n, k) << endl;
	}
}