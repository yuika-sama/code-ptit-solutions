#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	int t; cin >> t;
		while (t--){
		int x, chenh = 0;
		while (cin >> x){
			x%2==0 ? chenh++:chenh--;
		}
		if ((chenh > 0 && chenh%2==0) || (chenh < 0 && abs(chenh)%2!=0)) cout << "YES" << endl; else cout << "NO" << endl;
	}	
}