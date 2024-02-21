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
		int n, m, k;
		cin >> n >> m >> k;
		vector<ll> a(n), b(m), c(k);
		for (auto& i:a) cin >> i;
		for (auto& i:b) cin >> i;
		for (auto& i:c) cin >> i;
		
		vector<ll> res;
		int i = 0, j = 0, z = 0;
		while (i<n and j<m and z<k){
			if (a[i] == b[j] and b[j] == c[z]){
				res.pb(a[i]);
				i++, j++, z++;
			}
			else if (a[i] < b[j]) i++;
			else if (b[j] < c[z]) j++;
			else z++;
		}
		if (res.size() == 0) cout << -1; else
		for (auto i:res) cout << i << ' ';
		cout << endl;
	}
}