#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
const long long c = 1e9+7;
main(){
	int n; cin >> n;
	long long res = 1;
	while (n--){
		res = (res%c * 2%c)%c;
	}
	cout << res;
}