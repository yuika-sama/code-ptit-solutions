#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		int a[n+5];
		for (int i=0; i<n; i++){
			cin >> a[i];
		}
		ll res = -1e18;
		for (int i=0; i<n; i++){
			ll tmp = 1;
			for (int j = i; j<n; j++){
				tmp*=a[j];
				res = max(res, tmp);
			}
		}
		cout << res << endl;
	}
}