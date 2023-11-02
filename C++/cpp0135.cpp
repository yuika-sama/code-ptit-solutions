#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
bool isprime(int n){
	if (n<2) return false; else
	if (n==2) return true; else
	if (n>2 && n%2==0) return false; else
	for (int i=3; i<=sqrt(n); i+=2){
		if (n%i==0){
			return false;
		}
	}
	return true;
}
bool check(int i){
	if (isprime(sqrt(i)) && sqrt(i) == trunc(sqrt(i))) return true;
	return false;
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		for (int i=4; i<=n; i++){
			if (check(i)){
				cout << i << ' ';
			}
		}
		cout << endl;
	}
}
