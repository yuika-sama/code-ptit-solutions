#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
struct hh{
	string name, gr;
	float buy, sell;
	float cost;
	int id;
};
bool cmp(hh a, hh b){
	return (a.cost > b.cost);
}
main(){
	faster();
	int n; cin >> n;
	hh a[n+5];
//	cin.ignore();
	for (int i=1; i<=n; i++){
		cin.ignore();
		a[i].id = i;
		getline(cin, a[i].name);
		getline(cin, a[i].gr);
		cin >> a[i].buy >> a[i].sell;
		a[i].cost = a[i].buy - a[i].sell;
		a[i].cost = abs(a[i].cost);
	}
	sort(a+1, a+n+1, cmp);
	for (int i=1; i<=n; i++){
		cout << a[i].id << ' ' << a[i].name << ' ' << a[i].gr << ' ' << precision(2) << a[i].cost << endl;
	}
}