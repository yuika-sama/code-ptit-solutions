#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
long long sum(int n){
	return n*(n+1)/2;
}
main(){
	faster()
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n+5];
		int b[n+5];
		for (int i=0; i<n; i++){
			cin >> a[i];
			b[i] = a[i];
		}
		sort(b, b+n);
		int res = 1e9, index = -1;
		for (int i=0; i<n; i++){
			if (a[i]!=b[i]){
				index = i+1;
				res = min(res, index);
			}
		}
		cout << res << ' ' << index << endl;
	}
}
