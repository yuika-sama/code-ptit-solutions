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
		int n, k; cin >> n >> k;
		ll a[n+5];
		for (int i=0; i<n; i++){
			cin >> a[i];
		}
		//sliding window
		deque<ll> dq;
		for (int i=0; i<n; i++){
			if (dq.front() == i-k){
				dq.pop_front(); //da duyet het 1 doan i-k -> i 
			}
			while (!dq.empty() and a[dq.back()]<=a[i]){
				dq.pop_back();
			}
			dq.push_back(i);
			if (i+1>=k) cout << a[dq.front()] << ' ';
		}
		cout << endl;
	}
}