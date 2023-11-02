#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster()
	int t; cin >> t;
	while (t--){
		int n, m; cin >> n >> m;
		int a[n+5];
		for (int i=0; i<n; i++) cin >> a[i];
		int b[m+5];
		for (int i=0; i<m; i++) cin >> b[i];
		sort(a, a+n);
		for (int i=0; i<m; i++){
			int d = 0;
			for (int j=0; j<n; j++){
				if(b[i] == a[j]){
					d++;
					a[j] = -1;
				}
			}
			for (int j=0; j<d; j++) cout << b[i] << ' ';
		}
		for (int i=0; i<n; i++){
			if (a[i] != -1){
				cout << a[i] << ' ';
			}
		}
		cout << endl;
	}
}
