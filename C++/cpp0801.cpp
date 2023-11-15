#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define clrscr() system("cls");
using namespace std;
main(){
	faster();
	fstream in, out;
	in.open("PTIT.in", ios::in);
	out.open("PTIT.out", ios::out);
	string s;
	while (getline(cin, s)) out << s << endl;
	in.close();
	out.close();
	return 0;
}