//code tle rte ASDASDASDASD
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
	vector<bool> f(100000, true);
	f[1] = false;
	for (int i=2; i*i<=100000; i++){
		if (f[i]){
			for (int j=i*i; j<=100000; j+=i){
				f[j] = false;
			}
		}
	}
	vector<int> dp(100000, 0);
	for (int i=2; i<=100000; i++){
		if (f[i]) dp[i] = i; else
		{
			int r = i;
			int x = 2;
			int res = 2;
			while (r>0){
				if (r%x==0 and f[r/x] == true and f[x] == true){
					res = max(res, max(x, r/x));
					r/=x;
				}
				x++;
			}
			dp[i] = res;
		}
	}
	cin >> t;
	while (t--){
		int l, r; cin >> l >> r;
		ll s = 0;
		for (int i=l; i<=r; i++){
			s+=dp[i];
		}
		cout << s << endl;
	}
}
