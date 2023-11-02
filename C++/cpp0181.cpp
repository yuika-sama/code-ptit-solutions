#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int a,x,y;
		cin >> a >> x >> y;
		int z = __gcd(x,y);
		for (int i=0; i<z; i++){
			cout << a;
		}
		cout << endl;
	}
}
