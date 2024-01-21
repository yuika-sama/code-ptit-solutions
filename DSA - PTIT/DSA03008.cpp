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
	return (a.second < b.second);
}
main(){
	faster();
	int t; 
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		vector<pi> v(n);
		for (int i=0; i<n; i++){
			cin >> v[i].first;
		}
		for (int i=0; i<n; i++){
			cin >> v[i].second;
		}
		sort(v.begin(), v.end(), cmp);
		int d = 1;
		int rn = v[0].second;
		for (int i=1; i<n; i++){
			if (v[i].first >= rn){
				d++;
				rn = v[i].second;
			}
		}
		cout << d << endl;
	}
}