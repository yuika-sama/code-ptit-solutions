#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define linedown cout << '\n';
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	int n; cin >> n;
	int c = 0;
	for (int i=0; i<n; i++){
		int m = 0, k = 0;
		for (int j=0; j<3; j++){
			int x; cin >> x;
			if (x==1) m++; else k++;
		}
		if (m>k) c++;
	}
	cout << c;
}
