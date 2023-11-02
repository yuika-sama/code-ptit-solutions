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
		int a[n+5], f[n+5];
		f[0] = 0;
		for (int i=1; i<=n; i++){
			cin >> a[i];
			f[i] = f[i-1] + a[i];
		}
		int index = -1;
		for (int i=1; i<n; i++){
			if (f[i-1] == f[n] - f[i]){
				index = i;
//				break;
			}
		}
		cout << index << endl;
	}
}
