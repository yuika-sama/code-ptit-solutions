#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
struct Human{
	string name;
	string d, m, y;
};
bool cmp(Human a, Human b){
	if (a.y > b.y) return true;
	if (a.y < b.y) return false;
	if (a.m > b.m) return true;
	if (a.m < b.m) return false;
	if (a.d > b.d) return true;
	if (a.d < b.d) return false;
}
main(){
	faster();
	int n; cin >> n;
	Human a[n+5];
	for (int i=0; i<n; i++){
		cin >> a[i].name;
		string s; cin >> s;
		stringstream ss(s);
		getline(ss, a[i].d, '/');
		getline(ss, a[i].m, '/');
		getline(ss, a[i].y, '/');
	}
	sort(a, a+n, cmp);
	cout << a[0].name << endl << a[n-1].name;
}