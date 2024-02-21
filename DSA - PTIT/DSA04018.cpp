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
int solve(){
	int n; cin >> n;
	vector<int> a(n);
	for (int i=0; i<n; i++) cin >> a[i];
	return lower_bound(a.begin(), a.end(), 1) - a.begin();
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
//		cout << solve() << endl;
		int n; cin >> n;
		int d = 0, k = n;
		while (k--){
			cin >> n;
			d += (n==0);
		}
		cout << d << endl;
	}
}