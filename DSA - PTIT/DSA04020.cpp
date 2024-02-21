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
		auto it = binary_search(a.begin(), a.end(), k);
		if (!it){
			cout << "NO" << endl;
		} else {
			vector<int>::iterator itt = lower_bound(a.begin(), a.end(), k);
			cout << itt - a.begin() + 1 << endl;
		}
	}
}