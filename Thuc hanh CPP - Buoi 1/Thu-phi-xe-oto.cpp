#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define pb push_back
#define ll long long
using namespace std;
struct Vehicle{
	string id, type, date, io;
	int large;
};
int cost(Vehicle a){
	if (a.type == "Xe_con"){
		if (a.large == 5){
			return 10000;
		} else return 15000;
	} else if (a.type == "Xe_khach"){
		if (a.large == 29) return 50000; else return 70000;
	} else return 20000;
}
main(){
	int n; cin >> n;
	Vehicle a[n+5];
	map<string, int> m;
	for (int i=0; i<n; i++){
		cin >> a[i].id >> a[i].type >> a[i].large >> a[i].io >> a[i].date;
		if (a[i].io == "IN") m[a[i].date] += cost(a[i]);
	}
	for (auto x:m){
		cout << x.first << ": "<< x.second << endl;
	}
}