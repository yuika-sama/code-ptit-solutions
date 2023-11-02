#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
long long Pow(long long a, long long b, long long p){
	if (!b) return 1;
	if (b%2==1){
		long long t = Pow(a, b-1, p);
		return (t%p*a%p)%p;
	} else {
		long long t = Pow(a, b/2, p);
		return (t%p*t%p)%p;
	}
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		long long x, y, z;
		cin >> x >> y >> z;
		cout << Pow(x,y,z) << endl;
	}
}