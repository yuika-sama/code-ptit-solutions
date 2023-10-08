#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster();
	int t;cin >> t;
	cin.ignore();
	while (t--){
		string a, b; cin >> a >> b;
		int db[26] = {0};
		int res = 9999999, l, r;
		for (int i=0; i<b.size(); i++){
			db[b[i] - 'a']++;
		}
		for (int i=0; i<a.size(); i++){
			int da[26] = {0};
			for (int j=i; j<a.size(); j++){
				da[a[j] - 'a']++;
				bool check = true;
				for (int k = 0; k < 26; k++){
					if (da[k] < db[k]){
						check = false;
						break;
					}
				}
				if (check == true && res > j-i+1){
					res = j-i+1;
					l = i;
					r = j;
				}
			}
		}
		if (res == 9999999) cout << -1 << endl; else{
			for (int i=l; i<=r; i++){
				cout << a[i];
			}
			cout << endl;
		}
	}
}
