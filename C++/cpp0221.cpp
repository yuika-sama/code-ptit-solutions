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
		int h1=0, h2=n-1, c1=0, c2=m-1;
		while (h1<h2 && c1<c2){
			int tmp = a[h1][c1];
			for (int i=h1; i<h2; i++) a[i][c1] = a[i+1][c1];//tinh tien cot 1, tu tren xuong duoi
			for (int i=c1; i<c2; i++) a[h2][i] = a[h2][i+1];//tinh tien hang cuoi, tu trai sang phai
			for (int i=h2; i>h1; i--) a[i][c2] = a[i-1][c2];//tinh tien cot cuoi, tu duoi len tren
			for (int i=c2; i>c1; i--) a[h1][i] = a[h1][i-1];//tinh tien hang 1, tu phai sang trai
			a[h1][c1+1] = tmp;//tra gia tri con thieu
			c1++, h1++, c2--, h2--;//tinh tien tu vong ngoai vao vong trong
		}
		for (int i=0; i<n; i++){
			for (int j=0; j<m; j++){
				cout << a[i][j] << ' ';
			}
		}
		cout << endl;
	}
}