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
	ll n; cin >> n;
	ll s = n*(n+1)/2;
	if (s%2==0){
		cout << "YES" << endl;
		ll sum = s/2;
		vector<ll> r1, r2;
		for (int i=n; i>=1; i--){
			if (i<=sum){
				r1.pb(i);
				sum-=i;
			} else r2.pb(i);
		}
		cout << r1.size() << endl;
		for (int i=0; (int)i<r1.size(); i++){
			cout << r1[i] << ' ';
		}
		cout << endl << (int)r2.size() << endl;
		for (int i=0; i<r2.size(); i++){
			cout<< r2[i] << ' ';
		}
	} else cout << "NO";
}