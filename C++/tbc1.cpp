#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	int n; cin >> n;
	long long a[n+5] = {0}, b[n+5];
	for (int i=1; i<=n; i++){
		cin >> b[i];
	}
	long long f[n+5] = {0};
	for (int i=1; i<=n; i++){
		a[i] = b[i]*i - f[i-1];
		f[i] += f[i-1] + a[i];
	}
	for (int i=1; i<=n; i++) cout << a[i] << ' ';
}