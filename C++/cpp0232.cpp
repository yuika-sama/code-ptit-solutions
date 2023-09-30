#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
bool check(int i1, int i2, int j, bool a[16][16]){ // cot full 1;
	for (int i=i1; i<=i2; i++){
		if (a[i][j] == 0) return 0;
	}
	return 1;
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n, m; cin >> n >> m;
		int res = -1; //dien tich cua hcn lon nhat
		bool a[16][16];
		for (int i=0; i<n; i++){
			for (int j=0; j<m; j++){
				cin >> a[i][j];
			}
		}
		for (int i=0; i<n; i++){
			for (int k = i; k<n; k++){
				int d = 0;
				for (int j=0; j<m; j++){
					if (check(i, k, j, a) == false) continue;
					d++; //tim canh 1, canh toan 1
				}
				res = max(res, (k-i+1)*d); //k-i+1: canh 2
			}
		}
		cout << res << endl;
	}
}
