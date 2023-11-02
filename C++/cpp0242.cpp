#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster()
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		int a[n+5], b[n+5];
		for (int i=1; i<=n; i++) {
			cin >> a[i];
			a[i] += a[i-1];
		}
		for (int i=1; i<=n; i++){
			cin >> b[i];
			b[i] += b[i-1];
		}
		int d = 0;
		for (int i=1; i<=n; i++){
			for (int j=1; j<=i; j++){
				if (a[i] - a[j-1] == b[i] - b[j-1]){ //tong tu i->j
					d = max(i-j+1, d);
				}
			}
		}
		cout << d  <<endl; 
	}
}
