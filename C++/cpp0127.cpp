#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	bool f[1000000];
	memset(f, true, sizeof(f));
	f[0] = false; f[1] = false;
	for (int i=2; i<=sqrt(1000000); i++){
		if (f[i] == true){
			for (int j=i*i; j<=1000000; j+=i){
				f[j] = false;
			}
		}
	}
	faster();
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		int check = -1;
		for (int i=2; i<=n/2; i++){
			if (f[i] == true && f[n-i] == true){
				cout << i << " " << n-i << endl;
				check = 1;
				break;
			}
		}
		if (check==1){
		} else cout << -1 << endl;
	}
}