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
		int n, s; cin >> n >> s;
		int a[n+1], f[s+1] = {};
		f[0] = 1;
		for (int i=0; i<n; i++){
			cin >> a[i];
			for (int j=s; j>=a[i]; j--){
				if (f[j] == 0 and f[j-a[i]] == 1){
					f[j] = 1;
				}
			}
		}
		if (f[s] == 1) cout << "YES"; else cout << "NO";
		cout << endl;
	}
}