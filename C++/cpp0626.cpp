#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
class gv {
	public:
		string name, id, mj, ln;
		friend ostream &operator << (ostream &os, gv a){
			cout << a.id << ' ' << a.name << ' ' << a.mj << endl;
			return os;
		}
		
};
string shorter(string s){
	string res = "";
	res += s[0];
	for (int i=1; i<s.size(); i++){
		if (s[i-1] == ' '){
			res+=s[i];
		}
	}
	for (int i=0; i<res.size(); i++){
		res[i] = toupper(res[i]);
	}
	return res;
}
bool cmp(gv a, gv b){
	if (a.ln == b.ln) return a.id < b.id;
	return a.ln < b.ln;
}
bool canFind(string a, string b) {
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    return (b.find(a) != -1);
}
main(){
	faster()
	gv a[1000];
	int n;
	cin >> n;
	cin.ignore();
	for (int i=0; i<n; i++){
//		scanf("\n");
		getline(cin, a[i].name);
		stringstream ss(a[i].name);
		string s1;
		while (ss >> s1){
			a[i].ln = s1;
		}
		if (i<9){
			a[i].id = "GV0" + to_string(i+1);
		} else {
			a[i].id = "GV" + to_string(i+1);
		}
		getline(cin, a[i].mj);
		a[i].mj = shorter(a[i].mj);
	}
	int t; cin >> t;
	while (t--){
		string s;
		getline(cin >> ws, s);
		s = shorter(s);
		cout << "DANH SACH GIANG VIEN BO MON "<<s<<":\n";
		for (int i=0; i<n; i++){
			if (s == a[i].mj){
				cout << a[i];
			}
		}
	}
}