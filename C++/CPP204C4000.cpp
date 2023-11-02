#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
struct SinhVien{
	string name, id, lop, dob;
	float gpa;
};
void nhapThongTinSV(SinhVien &a){
	getline(cin, a.name);
	cin >> a.lop >> a.dob >> a.gpa;
	a.id = "N20DCCN001";
	string s = a.dob;
	if(s[2] != '/' ) s = "0" + s;
    if(s[5] != '/') s.insert(3 , "0");
    a.dob = s;
//    1 2 4 5 10 - 20 25 50
}
void inThongTinSV(SinhVien a){
	cout << a.id << ' ' << a.name << ' ' << a.lop << ' ' << a.dob << ' ' << precision(2) << a.gpa;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}