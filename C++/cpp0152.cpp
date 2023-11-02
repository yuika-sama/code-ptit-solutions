#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int a, m; cin >> a >> m;
		int x = -1;
		for (int i=0; i<m; i++){
			if (a*i%m==1){
				x = i;
				break;
			}
		}
		cout << x << endl;
	}
}
