#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
const long long c = 1e9+7;
main(){
	long long n; cin >> n;
	long long c = 0;
	long long t  = 5;
	while (t<=n){
		c+=n/t;
		t*=5;
	}
	cout << c;
}