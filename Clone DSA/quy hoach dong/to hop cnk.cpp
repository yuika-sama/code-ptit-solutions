#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
const ll c = 1e9+7;
main(){
	int t; cin >> t;
	ll f[1001][1001];
	for (int i=0; i<=1000; i++){
		for (int j=0; j<=1000; j++){
			if (j==i || j == 0) f[i][j] = 1; else
			f[i][j] = f[i-1][j-1]%c +f[i-1][j]%c;
			f[i][j]%=c;
		}
	}
	while (t--){
		int n, k; cin >> n >> k;
		cout << f[n][k] << endl;
	}
}