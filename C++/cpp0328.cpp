#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
int solve(string s, int k){
	int d = 0;
	for (int i=0; i<s.size(); i++){
		int n = 0;
		for (int j=i; j<s.size(); j++){
			n = n*10 + (s[j] - '0');
			n%=k;
			if (n==0) d++;
		}
	}
	return d;
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		string s; cin >> s;
		int res = 0;
		cout << solve(s, 8) - solve(s, 24) << endl;
	}
}