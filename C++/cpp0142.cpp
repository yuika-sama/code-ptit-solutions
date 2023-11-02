#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
bool isprime(int n){
	if (n<2) return false; else
	if (n==2) return true; else
	if (n!=2 && n%2==0) return false; else
	for (int i=3; i<=sqrt(n); i+=2){
		if (n%i==0){
			return false;
		}
	}
	return true;
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int x; cin >> x;
		int cnt = 0;
		for (int i=1; i<x; i++){
			if (__gcd(i, x) == 1){
				cnt++;
			}
		}
		if (isprime(cnt)) cout << 1 << endl; else cout << 0 << endl;
	}
}
