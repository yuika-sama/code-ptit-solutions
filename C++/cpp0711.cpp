#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
int x[25], n;
void Try(int i){
	for (int j=0; j<2; j++){
		x[i] = j;
		if (i==n){
			for (int i=1; i<=n; i++) cout << x[i];
			cout << ' ';
		} else Try(i+1);
	}
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		cin >> n;
		memset(x, 0, sizeof(x));
		Try(1);
		cout << endl;
	}
}