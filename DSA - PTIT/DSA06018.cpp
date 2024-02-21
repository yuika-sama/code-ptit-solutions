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
		map<int, int> m;
		int x, mx = -1, mn = 1e9;
		for (int i=0; i<n; i++){
			cin >> x;
			m[x]++;
			mx = max(mx, x);
			mn = min(mn, x);
		}
		x = 0;
		for (int i=mn; i<=mx; i++){
			if (m[i] == 0){
				x++;
			}
		}
		cout << x << endl;
	}
}