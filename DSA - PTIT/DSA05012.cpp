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
const ll c = 1e9+7;
main(){
	faster();
	ll f[1001][1001] = {0};
	f[1][1] = f[1][0] = 1;
	for (int i=2; i<=1000; i++){
		for (int j=0; j<=i; j++){
			if (i==0 or j==0) f[i][j] = 1; else
			f[i][j] = f[i-1][j-1] + f[i-1][j];
			f[i][j]%=c;
		}
	}
	int t; cin >> t;
	while (t--){
		int n, k; cin >> n >> k;
		cout << f[n][k] << endl;
	}
}