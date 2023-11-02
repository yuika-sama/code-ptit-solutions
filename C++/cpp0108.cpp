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
		vector<int> s;
		for (int i=2; i<=sqrt(n); i++){
			if (n%i==0){
				while (n%i==0){
					s.push_back(i);
					n/=i;
				}
			}
			if (n==1) break;
		}
		if (n>1) s.push_back(n);
		if (s.size() == 3 && s[0]!=s[1] && s[1]!=s[2]) cout << 1 << endl; else cout << 0 << endl;
	}
}
