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
main(){
	faster();
	int t; cin >> t;
	ll f[55] = {0};
	f[1] = 1, f[2] = 2, f[3] = 4;
	for (int i=4; i<=50; i++){
		f[i] = f[i-1] + f[i-2] + f[i-3];
	}
	while (t--){
		int n; cin >> n;
		cout << f[n] << endl;
	}
}