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
		map<ll, int> mp1, mp2, mp3;
		set<ll> s;
		ll x;
		for (int i=0; i<n; i++){
			cin >> x;
			s.insert(x);
			mp1[x]++;
		}
		for (int i=0; i<m; i++){
			cin >> x;
			s.insert(x);
			mp2[x]++;
		}
		for (int i=0; i<k; i++){
			cin >> x;
			s.insert(x);
			mp3[x]++;
		}
		bool check = false;
		for (auto j:s){
			if (mp1[j]>0 and mp2[j]>0 and mp3[j]>0){
				cout << j << ' ';
				check = true;
			}
		}
		if (!check) cout << -1;
		cout << endl;
	}
}