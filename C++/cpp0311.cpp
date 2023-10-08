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
		int a[30] = {0};
		bool check = true;
		for (int i=0; i<s.size(); i++){
			a[s[i]-'a']++;
			if (a[s[i] - 'a'] >= (s.size()+1)/2+1){//kieu qua nua thi k the sap xep xen ke dc ay :))
				check = false;
				break;
			}
		}
		cout << check << endl;
	}
}
