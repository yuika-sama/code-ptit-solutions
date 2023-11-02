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
		for (int i=0; i<n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		vector<int> v;
		int d = a[n-1] - a[0];
		for (int i=1; i<=sqrt(d); i++){
			if (d%i==0){
				v.push_back(i);
				if (i*i!=d){
					v.push_back(d/i);
				}
			}
		}
		//dem so uoc cua d thoa man dong du
		//d la hieu cua a.max - a.min
		int res = 0;
	    for (int i = 0; i < v.size(); ++i) {
	        int temp = a[0] % v[i];
	        int j;
	        for (j = 1; j < n; ++j) {
	            if (a[j] % v[i] != temp)
	                break;
	        }
	        if (j == n)
	            res++;
	    }
		cout << res <<endl;
	}
}
