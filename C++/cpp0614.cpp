#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
int d = 1;
string convert(){
	string res = "";
	if (d<10) res = "0000" + to_string(d); else
	res = "000" + to_string(d);
	return res;
}
string chuanhoa(string a){
	//dd/mm/yyyy
	if (a[2]!='/') a = '0' + a;
	if (a[5]!='/') a.insert(3,1,'0');
	return a;
}
class NhanVien{
	private:
		string name, id, dob, date, fax, gen, ad;
	public:
		friend istream &operator >>(istream &is, NhanVien &a){
			getline(is >> ws, a.name);
			cin >> a.gen >> a.dob;
			getline(is >> ws, a.ad);
			cin >> a.fax >> a.date;
			a.id = convert();
			d++;
			a.date = chuanhoa(a.date);
			a.dob = chuanhoa(a.dob);
			return is;
		}
		friend ostream &operator <<(ostream &os, NhanVien a){
			cout << a.id << ' ' << a.name << ' ' << a.gen << ' ' << a.dob << ' ' << a.ad << ' ' << a.fax << ' ' << a.date << endl;
			return os;
		}
};
int main(){
	faster();
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}