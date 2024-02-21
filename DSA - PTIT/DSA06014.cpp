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
	vector<bool> f(1e6+5, true);
	f[0] = f[1] = false;
	for (int i=2; i*i<=1e6; i++){
		if (f[i]){
			for (int j=i*i; j<=1e6; j+=i){
				f[j] = false;
			}
		}
	}
	faster();
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		bool check = false;
		for (int i=2; i<=n; i++){
			if (f[i] and f[n-i]){
				cout << i << ' ' << n-i << endl;
				check = true;
				break;
			}
		}
		if (!check) cout << -1;
		cout << endl;
	}
}