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
		/**
			solution: cach lam suc vat
			solution 2: binary search tim vi tri cua Min(a)(cung gan giong voi lower_bound). 
				neu min_pos == 0 -> binary_search(0, n-1). 
				neu min_pos != 0 -> binary_search(0, pos_min) hoac binary_seaerch(pos_min, n-1)
			qua luoi, mai code;
		int x, r;
		for (int i=1; i<=n; i++){
			cin >> x;
			if (x==k) r = i; 
		}
		cout << r << endl;
		**/
		int a[n+5];
		for (int i=0; i<n; i++) cin >> a[i];
		
	}
}