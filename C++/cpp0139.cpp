#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
bool prime(int n){
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
int sum(int n){
	int s = 0;
	while (n){
		s+=n%10;
		n/=10;
	}
	return s;
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		int m = n;
		int s = 0;
		for (int i=2; i<=sqrt(m); i++){
			while (m%i==0){
				m/=i;
				s+=sum(i);
			}
		}
		if (m!=1) s+=sum(m);
		if (s == sum(n) && !prime(n)) cout << "YES" << endl; else cout << "NO" << endl;
	}
}
