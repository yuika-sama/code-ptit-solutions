#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
struct SinhVien
{
    string name, classs, msv, date;
    float gpa;
};
void nhap(SinhVien &a)
{
    a.msv = "B20DCCN001";
    getline(cin, a.name);
    cin >> a.classs >> a.date >> a.gpa;

    if (a.date.length() == 8)
        a.date = '0' + a.date.substr(0, 2) + '0' + a.date.substr(2);
    else if (a.date.length() == 9) {
        if (a.date[1] == '/')
            a.date = '0' + a.date;
        else
            a.date = a.date.substr(0, 3) + '0' + a.date.substr(3);
    }
}
void in(SinhVien a)
{
    cout << a.msv << " " << a.name << " " << a.classs << " " << a.date << " ";
    cout << fixed << setprecision(2) << a.gpa;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
