#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define ll long long
#define precision(x)  setprecision(x) << fixed
//khong chay tren devc++ duoc :D
using namespace std;
ll Pow(int x, int y) {
    ll r = 1;
    for (int i = 1; i <= y; i++)
        r *= x;
    return r;
}
vector<ll> v = {6, 28, 496, 8128, 33550336, 8589869056};
void perfectNumber() {
    ll x = Pow(2, 18) * (Pow(2, 19) - 1);
    v.push_back(x);
}
main(){
	perfectNumber();
	faster();
	int t; cin >> t;
	while (t--){
		long long n; cin >> n;
		for (int i=0; i<s.size(); i++){
			if (n==v[i]){
				cout << 1 << endl;
				n=-1;
				break;
			}
		}
		if(n!=-1) cout << 0 << endl;
	}
}
