#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define clrscr() system("cls");
using namespace std;
string chuanhoa(string s){
	for (int i=0; i<s.size(); i++){
		s[i] = tolower(s[i]);
	}
	s[0] = toupper(s[0]);
	return s;
}
class SinhVien{
	public:
		string msv = "B20DCCN001";
		string ten, lop, dob;
		float gpa;
		
		friend istream &operator >> (istream &is, SinhVien &a){ // nap chong toan tu 
			getline(is, a.ten);
			stringstream ss(a.ten);
			string r;
			string res = "";
			while (ss >> r){
				r = chuanhoa(r);
				res += r + " ";
			}
			a.ten = res;
	        is >> a.lop >> a.dob >> a.gpa;
	        if (a.dob[2] != '/') a.dob.insert(0, "0");
	        if (a.dob[5] != '/') a.dob.insert(3, "0");
	        return is;
		}
		friend ostream &operator << (ostream &os, SinhVien a){ // nap chong toan tu
			os << a.msv << " " << a.ten << a.lop << " " << a.dob << " ";
	        cout << fixed << setprecision(2) << a.gpa;
	        return os;
		}
		//istream - toan tu nhap, ostream - toan tu xuat
};
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}