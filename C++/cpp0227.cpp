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
		int a[n+5][n+5];
		for (int i=0; i<n; i++){
			for (int j=0; j<n; j++){
				cin >> a[i][j];
			}
		}
		for (int i=0; i<n; i++){
			if(i%2==0){
				for (int j=0; j<n; j++){
					cout << a[i][j] << ' ';
				}
			} else {
				for (int j=n-1; j>=0; j--){
					cout << a[i][j] << ' ';
				}
			}
		}
		cout << endl;
	}
}
