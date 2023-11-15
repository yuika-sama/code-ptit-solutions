#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define pb push_back
using namespace std;
main(){
	int n; cin >> n;
	double a, r = 0;
	vector<double> se;
	double Min = 99, Max = -1;
	while (n--){
		cin >> a;
		se.pb(a);
		Min = min(Min, a);
		Max = max(Max, a);
	}
	int index = 0;
	for (auto x:se){
		if (x == Min || x == Max){
			
		} else {
			index++;
			r+=x;
		}
	}
	r/=index;
	cout << precision(2) << r << endl;
}