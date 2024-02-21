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
		int n, v;
		cin >> n >> v;
		int a[n+5], c[n+5];
		for (int i=1; i<=n; i++) cin >> c[i];
		for (int i=1; i<=n; i++) cin >> a[i];
		int f[n+5][v+5];
		memset(f, 0, sizeof(f));
		for (int i=1; i<=n; i++){
			for (int j=0; j<=v; j++){
				if (j>=c[i]){
					f[i][j] = max(f[i-1][j], f[i-1][j-c[i]] + a[i]);
				} else f[i][j] = f[i-1][j];
			}
		}
		cout << f[n][v] << endl;
	}
}