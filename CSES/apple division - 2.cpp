#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
const long long c = 1e9+7;
main(){
	int n; cin >> n;
	long long a[25];
	long long s = 0, res = 0;
	for (int i=0; i<n; i++){
		cin >> a[i];
		s += a[i];
	}
	for (int i=0; i< 1<<n; i++){//duyet tat ca cac tap con, k hieu lam, dung bitmask
		long long cs = 0;
		for (int j=0; j<n; j++){
			if (i>>j&1){
				cs+=a[j];
			}
		}
		if (cs<=s/2){
			res = max(res, cs);
		}
	}
	cout << s - res*2;
}