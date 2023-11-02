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
			getline(is, a.id);
			getline(is, a.name);
			getline(is, a.cls);
			getline(is, a.mail);
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
		cout << "DANH SACH SINH VIEN LOP " << s << ":\n";
		for (int i=0; i<n; i++){
			if (a[i].cls == s){
				cout << a[i];
			}
		}
	}
}