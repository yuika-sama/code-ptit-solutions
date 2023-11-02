#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define linedown cout << '\n';
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		char c; cin >> c;
		if (c>='A' && c<='Z') cout << char(tolower(c)); else cout << char(toupper(c));
		linedown;
	}
}
