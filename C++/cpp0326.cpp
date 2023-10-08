#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
string Sum(string a, string b);
string Mul(char a, string b);

string Mul(char a, string b){
	string res = "";
	int remember = 0;
	for (int i=b.size()-1; i>=0; i--){
		remember = (a-'0') * (b[i] - '0') + remember;
		res.insert(0, 1, remember%10 + '0');
		remember/=10;
	}
	if (remember>0) res.insert(0, 1, remember + '0');
	return res; //bro this shit kinda like bignum sum;
}
string Sum(string a, string b){
	if (a.size() < b.size()) a.insert(0, b.size() - a.size(), '0');
	else b.insert(0, a.size() - b.size(), '0');
	string res = "";
	int remember = 0;
	for (int i=a.size() - 1; i>=0; i--){
		remember = (a[i] - '0') + (b[i] - '0') + remember;
		res.insert(0, 1, remember%10 + '0');
		remember/=10;
	}
	if (remember > 0) res.insert(0, 1, remember + '0');
	return res;
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		string a, b; cin >> a >> b;
		int len = a.size();
		string s, res = "";
		for (int i=len-1; i>=0; i--){
			s = Mul(a[i], b);
			s.insert(s.size(), len - i- 1, '0'); //wtf was that shit??
			res = Sum(res, s);
		}
		cout << res << endl;
	}
}