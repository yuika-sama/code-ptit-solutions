#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	int n; cin >> n;
	int a[n+5];
	for (int i=0; i<n; i++) cin >> a[i];
	long long d = 0;
	for (int i=1; i<n; i++){
		if (a[i] < a[i-1]){
			d+=a[i-1] - a[i];
			a[i] = a[i-1];
		}
	}
	cout << d;
}