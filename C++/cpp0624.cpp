#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
class sv{
	public:
		string id, name, cls, mail;
		friend istream &operator >> (istream &is, sv &a){
			getline(cin, a.id);
			getline(cin, a.name);
			getline(cin, a.cls);
			getline(cin, a.mail);
			return is;
		}
		friend ostream &operator << (ostream &os, sv a){
			os << a.id << ' ' << a.name << ' ' << a.cls << ' ' << a.mail << endl;
			return os;
		}
};
main(){
	int n, q; 
	cin >> n;
	sv a[n];
	cin.ignore();
	for (auto& x:a) cin >> x;
	cin >> q;
	cin.ignore();
	string s;
	string major;
	while (q--){
		getline(cin, s);
		if (s == "Ke toan") major =  "KT";
	    else if (s == "Cong nghe thong tin") major = "CN";
	    else if (s == "An toan thong tin") major = "AT";
	    else if (s == "Vien thong") major = "VT";
	    else if (s == "Dien tu") major = "DT";
		for (auto& x:s){
			x = toupper(x);
		}
		cout << "DANH SACH SINH VIEN NGANH " << s << ":" << endl;
		for (int i=0; i<n; i++){
			if (major == "CN" or major == "AT"){
				if (a[i].id[5] == major[0] and a[i].id[6] == major[1] and a[i].cls[0] != 'E'){
					cout << a[i];
				}
			} else {
				if (a[i].id[5] == major[0] and a[i].id[6] == major[1]){
					cout << a[i];
				}
			}
		}
	}
}
