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
	int t; cin >> t;
	while (t--){
		int n, k; cin >> n >> k;
		vector<ll> f(1e5+5, 0);
		ll tmp = 0;
		for (int i=1; i<=k; i++){
			f[i] = (tmp+1)%c;
			tmp = (tmp+f[i])%c;
		}
		for (int i=k+1; i<=n; i++){
			for (int j=1; j<=k; j++){
				f[i] = (f[i] + f[i-j])%c;
			}
		}
		cout << f[n] << endl;
	}
}