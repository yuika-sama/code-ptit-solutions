#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		string s; cin >> s;
		int da[26] = {0};
		int l=0, res = INT_MAX;
		int t1 = 0, t2 = 0;
		bool dc[26] = {0};
		for (int i=0; i<s.size(); i++){
			if (dc[s[i] - 'a'] == false){
				dc[s[i] - 'a'] = true;
				t1++; // so luong chu cai khac nhau
			}
		}
		for (int i=0; i<s.size(); i++){
			da[s[i] - 'a']++;
			if (da[s[i] - 'a'] == 1) t2++;//so luong ki tu khac nhau
			if (t1==t2){ //da du t1 ki tu khac nhau
				while (da[s[l] - 'a']>1){
					da[s[l] - 'a']--; //thu hep ben trai
					l++;
				}
				res = min(res, i-l+1); //do dai
			}
		}
		cout << res << endl;
	}
}
