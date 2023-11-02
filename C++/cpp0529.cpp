#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
struct SV{
	int id;
	string msv, name, cls, mail, dn;
};
bool cmp(SV a, SV b){
	return (a.msv < b.msv);
}
main(){
	faster();
	int n; cin >> n;
	SV a[n+5];
	cin.ignore();
	for (int i=1; i<=n; i++){
		a[i].id = i;
		getline(cin, a[i].msv);
		getline(cin, a[i].name);
		getline(cin, a[i].cls);
		getline(cin, a[i].mail);
		getline(cin, a[i].dn);
	}
	sort(a+1, a+n+1, cmp);
	int q; cin >> q;
//	cin.ignore();
	for (int i=0; i<q; i++){
		string s; cin >> s;
		for (int i=1; i<=n; i++){
			if (a[i].dn == s){
				cout << a[i].id << ' ' << a[i].msv << ' ' << a[i].name << ' ' << a[i].cls << ' ' << a[i].mail << ' ' << a[i].dn << endl;
			}
		}
	}
}