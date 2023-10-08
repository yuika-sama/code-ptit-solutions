#include <bits/stdc++.h>
#define fast() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	fast();
	int t; cin >> t;
	while (t--){
		int n, k; cin >> n >> k;
		int a[n+5];
		for (int i=0; i<n; i++) cin >> a[i];
		int d = 0;
		for (int i=0; i<n-1; i++){
			for (int j=i+1; j<n; j++){
				if (a[i] + a[j] == k){
					d++;
				}
			}
		}
		cout << d << endl;
	}
}
