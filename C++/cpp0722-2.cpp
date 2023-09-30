#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define lli long long int
lli f[10005];
lli catalan(int n){
	lli tu = f[2*n];
	lli mau = f[n+1] * f[n];
	return (tu/mau);
}
using namespace std;
main(){
	int n; cin >> n;
	f[0] = 1;
	for (int i=1; i<=n*2; i++){
		f[i] = f[i-1] * i;
	}
	lli res = 0;
	for (int i=0; i<=n; i++){
		res += catalan(i)*catalan(n-i);
	}
	cout << res;
}