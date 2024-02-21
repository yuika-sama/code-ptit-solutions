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
void solve(vector<ll> a, int n){
	for (int i=0; i<n-2; i++){
		for (int j=i+1; j<n-1; j++){
			if (binary_search(a.begin() + j + 1, a.end(), a[i] + a[j])){
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
		int n; cin >> n;
		vector<ll> a(n);
		for (auto& i:a){
			cin >> i;
			i*=i;
		}
		sort(a.begin(), a.end());
		solve(a, n);
		cout << endl;
	}
}