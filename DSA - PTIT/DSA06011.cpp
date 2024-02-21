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
	if (abs(a.first) == abs(b.first)) return a.second > b.second;
	return (abs(a.first) < abs(b.first));
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		vector<int> a(n);
		for (int i=0; i<n; i++){
			cin >> a[i];
		}
		int res = 1e9;
		for (int i=0; i<n-1; i++){
			for (int j=i+1; j<n; j++){
				if (abs(res) > abs(a[j] + a[i])){
					res = a[i] + a[j];
				}
			}
		}
		cout << res << endl;
	}
}