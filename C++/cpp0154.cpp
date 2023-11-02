#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster()
	int t; cin >> t;
	while(t--){
		int n; long long k;
		cin >> n >> k;
		long long s = 0;
		for (int i=1; i<=n; i++){
			s+=i%k;
		}
		cout << (s==k) << endl;
	}
}

