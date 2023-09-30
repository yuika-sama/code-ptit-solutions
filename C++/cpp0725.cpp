#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
const long long c = 1e9+7;
long long a[1000][1000];
long long calclate(int k, int n){
	if (k>n-k){
		k = n-k;
	}
	if (a[k][n] != 0) return a[k][n];
	if (k==0) a[k][n] = 1;
	else if (k==1) a[k][n] = n;
	else a[k][n] = calclate(k-1, n-1) + calclate(k, n-1);	
	a[k][n] %= c;
	return a[k][n];
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n, k; cin >> n >> k;
		cout << calclate(k, n) << endl;
	}
}