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
		int n; cin >> n;
		int a[n+5];
		for (int i=0; i<n; i++) cin >> a[i];
		int f[n+5] = {0};
		if (n==1) cout << a[0];
		else if (n==2) cout << max(a[0], a[1]);
		else {
			ll b = a[0], c = a[1], d = a[0] + a[2];
			for (int i=3; i<n; i++){
				ll e = a[i];
				e+=max(b, c);
				b = c, c = d, d = e;
			}
			cout << max(c, d);
		}
		cout << endl;
	}
}