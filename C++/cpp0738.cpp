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
		int a[n];
		for (int i=0; i<n; i++) cin >> a[i];
		int res = 0;
		while (true){
			int d = 0;
			for(int i=0; i<n; i++){
				if(a[i]%2==1){
					a[i]--, res++;
				}
				if (a[i] == 0) d++;
			}
			if (d==n) break;
			for (int &x:a) x/=2;
			res++; 
		}
		cout << res << endl;
	}
}