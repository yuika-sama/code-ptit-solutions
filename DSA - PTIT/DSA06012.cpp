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
		int x;
		vector<int> s;
		for (int i=0; i<n; i++){
			cin >> x;
			s.pb(x);
		}
		x = 0;
		sort(s.begin(), s.end(), greater<int>());
		for (auto i:s){
			if (x == k) break;
			cout << i << ' ';
			x++;
		}
		cout << endl;
	}
}