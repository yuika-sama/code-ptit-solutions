#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		long long n; cin >> n;
		int cnt = 0;
		for (int i=1; i<=sqrt(n); i++){
			if (n%i==0){
				if (i%2==0) cnt++;
				if (n/i%2==0) cnt++;
				if (i%2==0 && i*i==n) cnt--;
			}
		}
		cout << cnt << endl;
	}
}
