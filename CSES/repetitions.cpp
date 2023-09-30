#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	string s; cin >> s;
	int i = 0;
	int res = -1;
	while (i<s.size()){
		int tmp = 0;
		int j = i;
		while (s[j] == s[i]){
			j++;
			tmp++;
		}
		res = max(res, tmp);
		i = max(i+1, j);
	}
	cout << res;
}