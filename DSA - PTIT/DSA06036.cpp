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
void solve(){
	int n, k; cin >> n >> k;
	vector<int> a(n);
	for (int& i:a) cin >> i;
	sort(a.begin(), a.end());
	for (int i=0; i<n; ++i){
		for (int j=i+1; j<n;++j){
			if (binary_search(a.begin() + j + 1, a.end(), k - a[i] - a[j])){
				cout << "YES";
				return;
			}
 		}
	}
	cout << "NO";
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		solve();
		cout << endl;
	}
}