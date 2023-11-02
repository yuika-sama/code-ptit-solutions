#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster();
	long long n; cin >> n;
	for (int i=2; i<=sqrt(n); i++){
		if (n%i==0){
			int d = 0;
			while (n%i==0){
				n/=i;
				d++;
			}
			cout << i << " " << d << endl;
		}
	}
	if (n!=1){
		cout << n << " " << 1;
	}
	
}
