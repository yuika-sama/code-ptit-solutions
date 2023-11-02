#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
long long lcm(long long a, long long b){
	return (a*b)/__gcd(a,b);
}
main(){
	faster();
	int t;
	cin >> t;
	while (t--){
		long long a,b; cin >> a >> b;
		cout << lcm(a,b) << " " << __gcd(a,b) << endl;
	}
}
