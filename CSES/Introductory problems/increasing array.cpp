#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp pake_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
main(){
	int n; cin >> n;
	vector<ll> a(2*1e5);
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	ll res = 0;
	for (int i=1; i<n; i++){
		if (a[i] < a[i-1]){
			res += a[i-1] - a[i];
			a[i] = a[i-1];
		}
	}
	cout << res;
}