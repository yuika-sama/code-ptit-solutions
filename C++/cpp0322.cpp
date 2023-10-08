#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
string Sum(string a, string b){
	int len = max(a.size(), b.size());
	while (a.size()<len){
		a = "0" + a;
	}
	while (b.size()<len){
		b = "0" + b;
	}
//	if (a<b) swap(a, b);
	string res = "";
	int remember = 0;
	for (int i=len-1; i>=0; i--){
		int digit = (a[i] - '0') + (b[i] - '0') + remember;
		remember = digit/10;
		digit%=10;
		res = (char)(digit + '0') + res;
	}
	if (remember > 0){
		res = (char)(remember + '0') + res;
	}
	return res;
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		string x, y; cin >> x >> y;
		cout << Sum(x, y) << endl;
	}
}