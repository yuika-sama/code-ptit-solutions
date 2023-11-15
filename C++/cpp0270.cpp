#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n, m; cin >> n >> m;
		int a[n+5][m+5];
		for (int i=0; i<n; i++){
			for (int j=0; j<m; j++){
				cin >> a[i][j];
			}
		}
		int b[3][3];
		for (int i=0; i<3; i++){
			for (int j=0; j<3; j++){
				cin >> b[i][j];
			}
		}
		long long r = 0;
		for (int i=1; i<n-1; i++){
			for (int j=1; j<m-1; j++){
				long long s = 0;
				for (int k = -1; k<=1; k++){
					for (int l = -1; l<=1; l++){
						s += a[i+k][j+l] * b[1+k][1+l];
					}
				}
				r += s;
			}
		}
		cout << r << endl;
	}
}