#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
int page_check(string s){
	if (s.size()<6) return -1;
	string temp;
	stringstream ss(s);
	ss>>temp;
	if (temp!="Page") return -1;
	int c = 0;
	ss>>temp;
	for (auto x:temp){
		c = c*10 + (x - '0');
	}
	return c;
}
int level_check(string s){
	if (s.size()<6) return -1;
	string text = "";
	int i;
	for (i=0; i<5; i++){
		text.pb(s[i]);
	}
	if (text!="Level") return -1;
	return s[i] - '0';
}
main(){
	faster();
	fstream fi, fo;
	fi.open("VANBAN.txt", ios::in);
	fo.open("MUCLUC.txt", ios::out);
	string s;
	int c = 0;
	vector<string> a;
	int page;
	while (getline(fi, s)){
		if (s.size() == 0) continue;
		int check = page_check(s);
		if (check != -1) page = check;
		check = level_check(s);
		if (check != -1){
			string tmp = "";
			for (int i=0; i<check; i++){
				tmp += '>';
			}
			for (int i=8; i<s.size(); i++){
				tmp+=s[i];
			}
			tmp += "--- " + to_string(page);
			a.pb(tmp);
		}
	}
	for (auto x:a) fo << x << endl;
	return 0;
}