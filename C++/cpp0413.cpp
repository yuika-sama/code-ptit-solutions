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
		int a[n+5];
		for (int i=0; i<n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		if (n%2==1){
			for (int i=0; i<=n/2; i++){
				if (i==n/2) cout << a[i]; else
				cout << a[n-i-1] << ' ' << a[i] << ' ';
			}
		} else {
			for (int i=0; i<n/2; i++){
				cout << a[n-i-1] << ' ' << a[i] << ' ';
			}
		}
		
		cout << endl;
	}
}
