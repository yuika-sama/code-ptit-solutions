#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define pi pair<int, int>
#define pb push_back
#define mp make_pair
#define int long long
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
int k;
bool cmp(pi a, pi b){
	if (abs(a.first - k) == abs(b.first - k)){
		return a.second < b.second;
	}
	return abs(a.first - k) < abs(b.first - k);
}
signed main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n; 
		cin >> n >> k;
		vector<pi> a(n);
		for (int i=0; i<n; i++){
			cin >> a[i].first;
			a[i].second = i;
		}
		sort(a.begin(), a.end(), cmp);
		for (int i=0; i<n; i++) cout << a[i].first << ' ';
		cout << endl;
	}
}