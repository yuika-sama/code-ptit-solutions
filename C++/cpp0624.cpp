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
//	private:
	public:
		string name, id, cls, mail;
		friend istream &operator >> (istream &is, sv &a){
			scanf("\n");
			getline(cin, a.id);
			getline(cin, a.name);
			getline(cin, a.cls);
			getline(cin, a.mail);
			return is;
		}
		friend ostream &operator << (ostream &os, sv a){
			cout << a.id << ' ' << a.name << ' ' << a.cls << ' ' << a.mail << endl;
			return os;
		}
		
};

main(){
	faster()
	sv a[1001];
	int n; 
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	int t;
	cin >> t;
	while (t--){
		scanf("\n");
		string s;
		getline(cin, s);
		
		string r="";
		if (s == "Ke toan") r =  "KT";
	    else if (s == "Cong nghe thong tin") r = "CN";
	    else if (s == "An toan thong tin") r = "AT";
	    else if (s == "Vien thong") r = "VT";
	    else if (s == "Dien tu") r = "DT";
		for (int i=0; i<s.size(); i++){
			s[i] = toupper(s[i]);
		}
		
		cout << "DANH SACH SINH VIEN NGANH " << s << ":\n";
		for (int i=0; i<n; i++){
			if (r=="CN" || r=="AT"){
				if (a[i].id[5] == r[0] && a[i].id[6]==r[1] && a[i].cls[0]!='E'){
					cout << a[i];
				}
			} else {
				if (a[i].id[5] == r[0] && a[i].id[6]==r[1]){
					cout << a[i];
				}
			}
		}
	}
}