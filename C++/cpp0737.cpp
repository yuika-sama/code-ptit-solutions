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
		int n, k; cin >> n >> k;
		int a[n+5];
		ll f[n+5] = {};
		f[0] = 0;
		for (int i=1; i<=n; i++){
			cin >> a[i];
			f[i] = f[i-1] + a[i];
		}
		ll Max = -999999999;
		pair<int, int> p;
		for (int i=1; i+k<=n; i++){
			if (f[i+k] - f[i+1] > Max){
				p = {i+1, i+k};
				Max = f[i+k] - f[i+1];
			}
		}
		for (int i = p.first; i<=p.second; i++){
			cout << a[i] << ' ';
		}
		cout << endl;
	}
}