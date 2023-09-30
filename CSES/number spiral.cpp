#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
//still not get it
main(){
	faster();
	int t; cin >> t;
	while (t--){
		long long x, y; cin >> x >> y;
		if (x<y){
			if (y%2==1){
				long long r = y*y;
				cout << r - x + 1 << endl;
			} else {
				long long r = (y-1)*(y-1)+1;
				cout << r + x - 1 << endl;
			}
		} else {
			if (x%2==0){
				long long r = x*x;
				cout << r - y + 1 << endl;
			} else {
				long long r = (x-1)*(x-1)+1;
				cout << r + y - 1 << endl;
			}
		}
//		cout << endl;
	}
}
