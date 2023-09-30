#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster();
	int n; cin >> n;
	int a[n+5][n+5];
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			cin >> a[i][j];
		}
	}
	int m; cin >> m;
	int b[m+5][m+5];
	for (int i=0; i<m; i++){
		for (int j=0; j<m; j++){
			cin >> b[i][j];
		}
	}
	
	for (int i=0; i<n; i+=m){
		for (int j=0; j<n; j+=m){
			for (int k=0; k<m; k++){
				for (int l=0; l<m; l++){
					a[i+k][j+l] *= b[k][l];
				}
			}
		}
	}
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}
}
