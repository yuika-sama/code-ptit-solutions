#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int m,n,a,b;
		cin >> m >> n >> a >> b;
		int d = 0;
		for (int i=m; i<=n; i++){
			if (i%a==0 || i%b==0){
				d++;
			}
		}
		cout << d << endl;
	}
}
