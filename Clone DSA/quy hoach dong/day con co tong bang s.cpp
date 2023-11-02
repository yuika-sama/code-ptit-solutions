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
		int n, k; cin >> n >> k;
		int f[40005] = {0}, a;
		f[0] = 1;
		for (int i=0; i<n; i++){
			cin >> a;
			f[a] = 1;
			for (int j=k; j>=a; j--){
				if (f[j-a] == 1 && j-a != a) f[j] = 1;
			}
		}
		if (f[k] == 1) cout << "YES" << endl; else cout << "NO" << endl;
	}
}