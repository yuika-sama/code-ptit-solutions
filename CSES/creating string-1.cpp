#include <bits/stdc++.h>
using namespace std;
main(){
	string s; cin >> s;
	sort(s.begin(), s.end());
	int r = 0;
	string ans;
	do {
		r++;
		ans += s + "\n";
	} while (next_permutation(s.begin(), s.end()));
	cout << r << '\n' << ans;
}