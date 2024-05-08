#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define pb push_back
using namespace std;
bool perfectsqrt(long long n){
	long long root = sqrt(n);
	return (root * root == n);
}
bool check(long long n){
	if (n==0) return true;
	long long a = 1, b = 1, c = 1;
	while (c<n){
		a = b;
		b = c;
		c = a+b;
	}
	return (c==n || perfectsqrt(5*n*n + 4) || perfectsqrt(5*n*n - 4));
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		long long n; cin >> n;
		if (check(n) == true) cout << "YES" << endl; else cout << "NO" << endl;
	}
}