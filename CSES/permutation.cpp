#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	int n; cin >> n;
	if (n<=3 && n!=1){
		cout << "NO SOLUTION";
		exit(0);
	}
	if (n==1) {
		cout << 1;
		exit(0);
	}
	for (int i=2; i<=n; i+=2) cout << i << ' ';
	for (int i=1; i<=n; i+=2) cout << i << ' ';
}