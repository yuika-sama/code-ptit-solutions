#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define clrscr() system("cls");
using namespace std;
class SinhVien{
	public:
		string name, id, dob, lop;
		float gpa;
		SinhVien(){};
		void nhap(){
			id = "B20DCCN001";
			getline(cin, name);
			cin >> lop >> dob >> gpa;
			if (dob[2] != '/') dob.insert(0, "0");
		    if (dob[5] != '/') dob.insert(3, "0");
		}
		void xuat(){
			cout << id << " " << name << " " << lop << " " << dob << " " << precision(2) << gpa;
		}
};
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}