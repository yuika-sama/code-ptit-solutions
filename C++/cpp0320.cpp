#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster();
	int t; cin >> t;
	cin.ignore();
	while (t--){
		string s; cin >> s;
		int a[10] = {0};
		bool flag = true;
		for (int i=0; i<s.size(); i++){
			if (!isdigit(s[i])){
				flag = false;
				break;
			}
			a[s[i] - '0']++;
		}
		if (s[0] == '0') flag = false;
		if (!flag){
			cout << "INVALID";
		} else {
			for (int i=0; i<10; i++){
				if (a[i] == 0){
					flag = false;
					break;
				}
			}
			if (!flag) cout << "NO"; else cout << "YES";
		}
		cout << endl;
	}
}
