#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		vector<int> a(n);
		for (int i=0; i<n; i++) cin >> a[i];
		int k, x; cin >> k >> x;
		
		int i = lower_bound(a.begin(), a.end(), x) - a.begin(), j = i;
		for (int z = k/2; z>=1; z--){
			cout << a[i-z] << ' ';
		}
		if (a[j] == x) j++;
		for (int z = 0; z<k/2; z++){
			cout << a[j+z] << ' ';
		}
		cout << endl;
	}
}