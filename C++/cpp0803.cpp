#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define clrscr() system("cls");
using namespace std;
int main(){
	fstream in;
	in.open("DATA.in");
	int f[1000] = {0};
	int n;
	map <int, int> m;
	while (in >> n){
		m[n]++;
	}
	in.close();
	for (auto x:m){
		cout << x.first << ' ' << x.second << endl;
	}
	return 0;
}