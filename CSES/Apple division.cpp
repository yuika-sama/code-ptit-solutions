#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
const long long c = 1e9+7;
long long solve(int n, long long a[], long long t, long long x){
	if (n==0) return abs(t-x - x);
	return min(solve(n-1, a, t, x), solve(n-1, a, t, x+a[n]));
}
main(){
	int n; cin >> n;
	long long a[25];
	long long total = 0;
	for (int i=0; i<n; i++){
		cin >> a[i];
		total += a[i];
	}
	cout << solve(n-1, a, total, 0); //position(calculate from right side), array, total sum of array, current sum
}
