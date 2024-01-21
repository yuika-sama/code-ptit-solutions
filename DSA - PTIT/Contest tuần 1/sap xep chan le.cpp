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
	int n; cin >> n;
	vector<int> e, ne;
	int f[n+1] = {0};
	for (int i=1; i<=n; i++){
		int x;
		cin >> x;
		if (x%2==1){
			ne.pb(x);
		} else {
			e.pb(x);
		}
		f[i] = x%2;
	}
	sort(e.begin(), e.end());
	sort(ne.rbegin(), ne.rend());
	int x = 0, y = 0;
	for (int k = 1; k<=n; k++){
		if (f[k] == 0) cout << e[x++] << ' '; else cout << ne[y++] << ' ';
	}
}