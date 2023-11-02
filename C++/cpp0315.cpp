#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
bool is_sort(string s){
	for (int i=0; i<s.size()-1; i++){
		if (s[i] > s[i+1]){
			return false;
		}
	}
	return true;
}
main(){
	faster();
	int t; cin >> t;
	cin.ignore();
	while (t--){
		string s; cin >> s;
		int i = s.size() - 2, j = i+1;
		while (s[i]<=s[i+1]) i--;
		if (i<0) cout << -1 << endl; else
		{
			while (s[j] >= s[i]) j--;
			while (s[j] == s[j-1]) j--;
			swap(s[i], s[j]);
			cout << s <<endl;
		}
	}
}
