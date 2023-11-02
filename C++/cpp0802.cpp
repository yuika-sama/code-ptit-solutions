#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define clrscr() system("cls");
using namespace std;
int calc(string &s){
	if (s.size()>9) return 0;
	long long n = 0;
	for (char i:s){
		if (!isdigit(i)) return 0;
		n = n*10 + i-'0';
	}
	if (n<=2147483647) return (int)n;
	return 0;
}
int main(){
	fstream in;
	in.open("DATA.in");
	string s;
	long long res = 0;
	while (in >> s){
		res += calc(s);
	}
	in.close();
	cout << res;
	return 0;
}