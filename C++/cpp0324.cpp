#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
long long mod(string a, long long m){
	long long r = 0;
	for (auto x:a){
		r = r*10 + x-'0';
		r%=m;
	}
	return r;
}
long long Pow(long long a, long long b, long long m){
	if (b==0) return 1;
	if (b==1) return a%m;
	long long t = Pow(a, b/2, m);
	long long r = t*t%m;
	if (b%2==0) return r;
	return r*a%m;
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		string a; cin >> a;
		long long b, m; cin >> b >> m;
		long long x = mod(a, m);
		cout << Pow(x,b,m) << endl; 
	}
}