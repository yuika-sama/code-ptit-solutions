#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		long long b, p; cin >> b >> p;
		long long d = 0;
		/*x%p=1 then (x^2)%p=1
		Noticed: x%p=1 then (x+p*i)%p=1
		so, with each satified x, , we find last - the largest number that last = (x+p*i) and last%p=1
		-> we find the quantity of satified number inside [x, last]
		*/
		for (long long i = 1; i<p; i++){
			if ((i*i)%p == 1){
				long long last = i+p*(b/p);
				if (last>b){
					last -= p;
				}
				d+=(last-i)/p + 1;
			}
		}
		cout << d << endl;
	}
}

