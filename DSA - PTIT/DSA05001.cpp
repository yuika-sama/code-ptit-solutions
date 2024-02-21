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
		string a, b; cin >> a >> b;
		int f[1001][1001] = {0};
		int res = -1;
		for (int i=1; i<=a.size(); i++){
			for (int j=1; j<=b.size(); j++){
				if (a[i-1] == b[j-1]){
					f[i][j] = f[i-1][j-1] + 1;
				} else f[i][j] = max(f[i-1][j], f[i][j-1]);
				res = max(res, f[i][j]);
			}
		}
		cout << res << endl;
		
	}
}