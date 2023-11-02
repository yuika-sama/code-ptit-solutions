#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
using namespace std;
int uoc(int n){
	if (n==1) return 1; else
	if (n%2==0) return 2; else
	for (int i=3; i<=sqrt(n); i+=2){
		if (n%i==0){
			return i;
		}
	}
	return n;
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		for (int i=1; i<=n; i++){
			cout << uoc(i) << ' ';
		}
		cout << endl;
	}
}
