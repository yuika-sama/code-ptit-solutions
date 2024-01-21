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
const ll c = 1e9+7;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		vector<int> a(n);
		for (int i=0; i<n; i++){
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		ll s = 0;
		for (int i=0; i<n; i++){
			ll tt = 0;
			tt = (a[i]%c * i%c)%c;
			s = (s%c + tt%c)%c;
		}
		cout << s << endl;
	}
}