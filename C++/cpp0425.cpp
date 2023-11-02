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
		for (int i=0; i<n; i++) cin >> a[i];
		sort (a, a+n);
		int b[n+5];
		int index = 0;
		for (int i=0; i<n; i+=2) b[i] = a[index++];
		for (int i=1; i<n; i+=2) b[i] = a[index++];
		for (int i=0; i<n; i++) cout << b[i] << ' ';
		cout << endl;
	}
}