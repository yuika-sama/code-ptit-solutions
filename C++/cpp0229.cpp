#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n, m; cin >> m >> n;
		int a[m+5][n+5];
		for (int i=0; i<m; i++){
			for (int j=0; j<n; j++){
				cin >> a[i][j];
			}
		}
		int i=0, j=0;
		bool x = true;
		for (int k = 0; k<n*m;){
			if (x){
				for (;i>=0 && j<n; j++, i--){
					cout << a[i][j] << ' ';
					k++;
				}
				if (i<0 && j<=n-1){
					i=0;
				}
				if (j==n){
					i+=2;
					j--;
				}
			}
			else {
				for (; j>=0 && i<m; i++, j--){
					cout << a[i][j] << ' ';
					k++;
				}
				if (j<0 && i<=m-1){
					j=0;
				}
				if (i==m){
					j+=2;
					i--;
				}
			}
			x=!x;
		}
		cout << endl;
	}
}