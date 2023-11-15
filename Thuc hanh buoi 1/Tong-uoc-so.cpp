#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define pb push_back
#define ll long long
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		long long n; cin >> n;
		long long r = 0;
		for (long long i=1; i<=sqrt(n); i++){
			if (n%i==0){
				r+=i;
				r+=(n/i);
				if (i*i==n) r-=i; 
			}
		}
		cout << r << endl;
	}
}