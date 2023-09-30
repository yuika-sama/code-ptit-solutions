#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
const long long c = 1e9+7;
int n, x[21];
long long a[21], res;
void Try(int i){
	for (int j=0; j<2; j++){
		x[i] = j;
		if (i==n-1){
			long long cur1 = 0, cur2 = 0;
			for (int k=0; k<n; k++){
				if (x[k] == 1){
					cur1+=a[k];
				}
				if (x[k] == 0){
					cur2+=a[k];
				}
			}
			res = min(res, abs(cur1 - cur2));
		} else Try(i+1);
	}
}
main(){
	cin >> n;
	for (int i=0; i<n; i++) cin >> a[i];
	if (n==1) cout << a[0]; else {
		for (int i=0; i<n; i++) x[i] = 0;
		res = 1e9+7;
		Try(1);
		cout << res;
	}
}