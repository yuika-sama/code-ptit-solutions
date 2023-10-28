#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
struct hs{
	string name, dt;
	int kv;
	double p;
	string place;
	string stat;
	string id;
};
string chuanhoa(string a){
	stringstream ss(a);
	string s;
	string res = "";
	while (ss >> s){
		for (int i=0; i<s.size(); i++){
			s[i] = tolower(s[i]);
		}
		s[0] = toupper(s[0]);
		res = res + s + ' ';
	}
	return res;
}
double riu(double p, int kv, string dt){
	if (kv == 1) p+=1.5; else
	if (kv == 2) p+=1;
	if (dt != "Kinh") p+=1.5;
	return p;
}
bool cmp(hs a, hs b){
	if (a.p == b.p) return a.id < b.id;
	return a.p>b.p;
}
main(){
	int n; cin >> n;
	hs a[100];
	for (int i=0; i<n; i++){
		scanf("\n");
		getline(cin, a[i].name);
		a[i].name = chuanhoa(a[i].name);
		
		cin >> a[i].p;
		cin.ignore();
		getline(cin, a[i].dt);
		cin >> a[i].kv;
		
		a[i].p = riu(a[i].p, a[i].kv, a[i].dt);
		if (a[i].p>=20.5) a[i].stat = "Do"; else a[i].stat = "Truot";
		if (i<9) a[i].id = "TS0" + to_string(i+1); else
		a[i].id = "TS" + to_string(i+1); 
	}
	sort(a, a+n, cmp);
	for (int i=0; i<n; i++){
		cout << a[i].id << ' ' << a[i].name << precision(1) << a[i].p << ' ' << a[i].stat << endl;
	}
}