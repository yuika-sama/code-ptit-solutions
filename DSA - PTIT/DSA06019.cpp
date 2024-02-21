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
	if ((a.second == b.second)) return a.first < b.first;
	return a.second > b.second;
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		vector<pi> v;
		int x;
		for (int i=0; i<n; i++){
			cin >> x;
			bool check = false;
			for (auto& j:v){
				if (j.first == x){
					check = true;
					j.second++;
					break;
				}
			}
			if (!check) v.pb({x, 1});
		}
		sort(v.begin(), v.end(), cmp);
		for (int i=0; i<v.size(); i++){
			while (v[i].second != 0){
				cout << v[i].first << ' ';
				v[i].second--;
			}
		}
		cout << endl;
	}
}