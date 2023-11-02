#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	int n; cin >> n;
	int a[n*n+5];
	for (int i=0; i<n*n; i++){
		cin >> a[i];
	}
	sort(a, a+n*n);
	int d = 0;
	int f[n+5][n+5];
	int c1 = 0, c2 = n-1, h1=0, h2 = n-1;
	while (c2>=c1 && h2>=h1){
		for (int i=c1; i<=c2; i++) f[h1][i] = a[d++];
		h1++;
		for (int i=h1; i<=h2; i++) f[i][c2] = a[d++];
		c2--;
		if (h1<=h2){
			for (int i=c2; i>=c1; i--) f[h2][i] = a[d++];
			h2--;
		}
		if (c1<=c2){
			for (int i=h2; i>=h1; i--) f[i][c1] = a[d++];
			c1++;
		}
	}
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			cout << f[i][j] << ' ';
		}
		cout << endl;
	}
}