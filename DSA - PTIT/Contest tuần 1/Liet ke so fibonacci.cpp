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
	ll f[100];
	f[1] = f[2] = 1;
	for (int i=3; i<=92; i++){
		f[i] = f[i-1] + f[i-2];
	}
	int t; cin >> t;
	while (t--){
		int a, b; cin >> a >> b;
		for (int i=a; i<=b; i++){
			cout << f[i] << ' ';
		}
		cout << endl;
	}
}