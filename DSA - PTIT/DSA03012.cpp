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
		string s; cin >> s;
		int a[255] = {0};
		int m = -1;
		for (auto i:s){
			a[i]++;
			m = max(m, a[i]);
		}
		if (m <= (s.size()+1)/2) cout << 1 << endl; else cout << -1 << endl;
	}
}