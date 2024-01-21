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
	while (t--){
		int n; cin >> n;
		int a[n+5];
		for (int i=1; i<=n; i++){
			cin >> a[i];
		}
		ll x = 0, y = 0;
		sort(a+1, a+1+n);
		for (int i=1; i<=n; i++){
			x = x*10 + a[i]; i++;
			if (i!=n-1) y = y*10 + a[i];
		}
		cout << x+y << endl;
	}
}