#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	long long n; cin >> n;
	cout << n << ' ';
	while (n!=1){
		if (n&1){
			n = n*3+1;
			cout << n << ' ';
		} else {
			n/=2;
			cout << n << ' ';
		}
	}
}
