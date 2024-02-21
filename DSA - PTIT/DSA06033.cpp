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
bool cmp(pi a, pi b){
	return a.first < b.first;
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		vector<pi> a(n);
		for (int i=0; i<n; i++){
			cin >> a[i].first;
			a[i].second = i;
		}
		sort(a.begin(), a.end(), cmp);
		int res = -1e9, last = a[0].second;
		for (int i=1; i<n; i++){
			if (a[i].second - last > res){
				res = a[i].second - last;
			}
			last = min(last, a[i].second);
		}
		cout << res << endl;
	}
}