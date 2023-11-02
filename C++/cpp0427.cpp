#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		int a[n+5];
		int d = 0;
		for (int i=0; i<n; i++){
			cin >> a[i];
			d+=(a[i]==0);
		}
		for (int i=0; i<n-1; i++){
			if (a[i+1]!=0 && a[i] == a[i+1]){
				a[i] *= 2;
				a[i+1] = 0;
				d++;
			}
		}
		for(int i=0; i<n; i++){
			if (a[i] != 0)cout << a[i] << ' ';
		}
		while (d--){
			cout << 0 << ' ';
		}
		cout << endl;
	}
}