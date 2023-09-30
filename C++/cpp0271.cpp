#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n, m, z; 
		cin >> n >> m >> z;
		int a[n+5][m+5];
		for (int i=0; i<n; i++){
			for (int j=0; j<m; j++){
				cin >> a[i][j];
			}
		}
		int b[n-z+1][m];
		for (int j=0; j<m; j++){
			for (int i=0; i<=n-z; i++){
				if (i==0){
					int s = 0;
					for (int l=0; l<z; l++){
						s+=a[l][j];
					}
					b[i][j] = s;
				} else {
					b[i][j] = b[i-1][j] - a[i-1][j] + a[i+z-1][j];
				}
			}
		}
		int c[n-z+1][m-z+1];
	    for (int i = 0; i <= n - z; ++i) {
	        for (int j = 0; j <= m - z; ++j) {
	            if (j == 0) {
	                int sum = 0;
	                for (int l = 0; l < z; ++l) {
	                    sum += b[i][l];
	                }
	                c[i][j] = sum;
	            }
	            else {
	                c[i][j] = c[i][j - 1] - b[i][j - 1] + b[i][j + z - 1];
	            }
	        }
	    }
	    for (int i=0; i<=n-z; i++){
	    	for (int j=0; j<=m-z; j++){
	    		cout << c[i][j]/(z*z) << ' ';
			}
			cout << endl;
		}
//		cout << endl;
	}
}