#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
struct NhanVien{
	string id = "00001";
	string name, gender, dob, ad, f, day;
};
void nhap(NhanVien &a){
	getline(cin, a.name); 
	cin >> a.gender >> a.dob; 
	cin.ignore();
	getline(cin, a.ad); 
	cin >> a.f >> a.day;
}
void in(NhanVien a){
	cout << a.id << ' ';
	cout << a.name << ' ';
	cout << a.gender << ' ';
	cout << a.dob << ' ';
	cout << a.ad << ' ';
	cout << a.f << ' ';
	cout << a.day << ' ';
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
