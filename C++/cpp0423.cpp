#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n, k; cin >> n >> k;
		int a[n+5];
		int s = 0; // sp phan tu <=k
		for (int i=0; i<n; i++){
			cin >> a[i];
			s+=(a[i] <= k);
		}
		int r = 0;
		for (int i=0; i<s; i++){
			r += (a[i]>k); //trong s phan tu dau tien, co bao nhieu phan tu >k
		}
		int ss = r; //so lan swap
		for (int i=0, j=s; j<n; j++, i++){
			if (a[i]>k) r--;
			if (a[j]>k) r++;
			ss = min(ss, r);
		}
		cout << ss << endl;
	}
}