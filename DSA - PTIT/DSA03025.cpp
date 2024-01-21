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
	if (a.second == b.second) return a.first < b.first;
	return a.second < b.second;
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		vector<pi> e(n);
		for (int i=0; i<n; i++){
			cin >> e[i].first >> e[i].second;
		}
		sort(e.begin(), e.end(), cmp);
		int d = 1;
		int now = e[0].second;
		for (int i=1; i<n; i++){
			if (e[i].first >= now){
				now = e[i].second;
				d++;
			}
		}
		cout << d << endl;
	}
}