#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		long long n, m; cin >> n >> m;
		long long sum = (n+1)*n/2;
		long long a = (sum+m)/2;
		long long b = sum-a;
		if (a-b == m && __gcd(a,b) == 1) cout << "Yes"; else cout << "No";
		cout << endl;
	}
}
