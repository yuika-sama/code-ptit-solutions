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
		int n; 
		ll k;
		cin >> n >> k;
		ll a[n];
		for (auto& i:a) cin >> i;
		ll d = 0;
		sort(a, a+n);
		for (int i=0; i<n; i++){
			for (int j=i+1; j<n; j++){
				d += lower_bound(a+j+1, a+n, k - a[i] - a[j]) - (a+j+1);
			}
		}
		cout << d << endl;
	}
}