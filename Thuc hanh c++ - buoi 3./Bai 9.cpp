#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
string chuanhoa_dob(string s){
	if (s[2]!='/') s = '0' + s;
	if (s[5]!='/') s.insert(3, 1, '0');
	return s;
}
string chuanhoa_name(string s){
	string res = "";
	string t;
	stringstream ss(s);
	while (ss>>t){
		for (int i=0; i<t.size(); i++){
			t[i] = tolower(t[i]);
		}
		t[0] = toupper(t[0]);
		res = res + t + " ";
	}
	return res;
}
class SinhVien{
	public:
		string name, cls, dob;
		double gpa;
		friend istream &operator >> (istream &is, SinhVien &a){
			getline(is, a.name);
			is >> a.cls;
			is >> a.dob;
			is >> a.gpa;
			a.dob = chuanhoa_dob(a.dob);
			a.name = chuanhoa_name(a.name);
			return is;
		}
		friend ostream &operator << (ostream &os, SinhVien a){
			cout << "B20DCCN001 " << a.name << a.cls << ' ' << a.dob << ' ' << precision(2) << a.gpa;
			return os;
		}
};
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}