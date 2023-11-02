#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
const long long c = 1e9+7;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		long long a[n+5]; 
		for (int i=0; i<n; i++) cin >> a[i];
		long long gcd = a[0], mul = a[0];
		for (int i=1; i<n; i++){
			gcd = __gcd(gcd, a[i]);
			mul = (mul%c * a[i]%c)%c;
		}
		long long res = 1;
		for (int i=1; i<=gcd; i++){
			res*=mul;
			res%=c;
		}
		cout << res << endl;		
	}
}
