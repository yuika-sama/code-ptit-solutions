#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
class team{
	public:
		string teamid, teamname, school;
};
class sv: public team{
	public:
		string name, id;
};
map<string, team> mm;
bool cmp(sv a, sv b){
	return a.name < b.name;
}
main(){
	int n; cin >> n;
	cin.ignore();
	team a[n+1];
	for (int i=0; i<n; i++){
		if (i+1<10){
			a[i].teamid = "Team0" + to_string(i+1);
		} else a[i].teamid = "Team" + to_string(i+1);
		getline(cin, a[i].teamname);
		getline(cin, a[i].school);
		mm[a[i].teamid] = a[i];
	}
	int m; cin >> m;
	cin.ignore();
	sv b[m+1];
	for (int i=0; i<m; i++){
		if (i+1<10){
			b[i].id = "C00" + to_string(i+1);
		} else b[i].id = "C0" + to_string(i+1);
		getline(cin, b[i].name);
		getline(cin, b[i].teamid);
	}
	sort(b, b+m, cmp);
	for (int i=0; i<m; i++){
		cout << b[i].id << ' ' << b[i].name << ' ' << mm[b[i].teamid].teamname << ' ' << mm[b[i].teamid].school << endl;
	}
}