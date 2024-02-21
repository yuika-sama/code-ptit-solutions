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
		int n, k; cin >> n >> k;
		vector<int> a(n);
		for (auto& i:a) cin >> i;
		sort(a.begin(), a.end());
		ll r = 0;
		for (int i=0 ;i<n; i++){
			r += lower_bound(a.begin() + i + 1, a.end(), a[i] + k) - (a.begin() +i + 1);
		}
		cout << r << endl;
	}
}