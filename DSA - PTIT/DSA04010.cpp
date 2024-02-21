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
		int a[n+1] = {0};
		for (int i=1; i<=n; i++){
			cin >> a[i];
			a[i] += a[i-1];
		}
		int res = -1e9;
		for (int i=1; i<n; i++){
			for (int j=i+1; j<=n; j++){
				res = max(res, a[j] - a[i-1]);
			}
		}
		cout << res << endl;
	}
}