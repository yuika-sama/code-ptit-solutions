#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	int n; cin >> n;
	unsigned long long c[5000];
	c[0] = c[1] = 1;
	for (int i=2; i<=n; i++){
		c[i] = (2*(2*(i-1)+1)/((i-1)+2)) * c[i-1];
	}
	unsigned long long r = 0;
	for (int i=0; i<=n; i++){
		r = r+c[i]*c[n-i];
	}
	cout << r;
}