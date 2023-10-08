#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define clrscr() system("cls");
using namespace std;
int id = 1;
string convert(int id){
	string tmp = to_string(id);
	while (tmp.size()<5){
		tmp = '0' + tmp;
	}
	return tmp;
}
class NhanVien{
	private:
		string name, mnv, dob, adr, gen, fax, date;
	public:
		friend istream &operator >> (istream &is, NhanVien &a){
			getline(is, a.name);
			cin >> a.gen >> a.dob;
			is.ignore();
			getline(is, a.adr);
			cin >> a.fax >> a.date;
			a.mnv = convert(id);
			id++;
			return is;
		}
		friend ostream &operator << (ostream &os, NhanVien a){
			cout << a.mnv << ' ' << a.name << ' ' << a.gen << ' ' << a.dob << ' ' << a.adr << ' ' << a.fax << ' ' << a.date << endl;
			return os; 
		}
};
int main(){
    NhanVien a;
    cin >> a;
    cout << a;
    return 0;
}