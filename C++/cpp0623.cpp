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
	private:
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
	sv a[1001];
	int n; cin >> n;
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	int t; cin >> t;
	while (t--){
		string s;
		cin >> s;
		cout << "DANH SACH SINH VIEN KHOA " << s << ":\n";
		for (int i=0; i<n; i++){
//			string r = a[i].cls;
			if (a[i].cls[1] == s[2] and a[i].cls[2] == s[3]){
				cout << a[i];
			}
		}
	}
}