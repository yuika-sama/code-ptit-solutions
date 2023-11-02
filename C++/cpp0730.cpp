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
		bool negative = false;
		for (int i=1; i<=n; i++){
			cin >> a[i];
			negative += (a[i] <= 0);
		}
//		if (negative == true){
//			cout << *max_element(a+1, a+n+1) << endl;
//			exit(0);
//		}
		ll sum = 0, res = a[1];
		for (int i=1; i<=n; i++){
			if (sum + a[i] < 0){
				sum = 0;
			} else {
				sum += a[i];
				res = max(res, sum);
			}
		}
		cout << res << endl;
	}
}