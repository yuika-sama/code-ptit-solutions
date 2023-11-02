#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
class theloai;
class Phim;
map<string, string> myMap;
int idx = 1;
class TheLoai
{
public:
    string ma, name;
    friend istream &operator >>(istream &is, TheLoai &a)
    {
        a.ma = "TL";
        if(idx < 10) a.ma += "00" + to_string(idx);
        else if(idx < 100) a.ma += "0" + to_string(idx);
        else a.ma += to_string(idx);
        getline(is, a.name);
        myMap[a.ma] = a.name;
        ++idx;
        return is;
    }
};
int j = 1;
int cv(string &s)
{
    int res = 0;
    for(int i : s) res = res * 10 + (i - '0');
    return res;
}
class Phim
{
public:
    string ma, name, date, tap, tl, code;
    int ngay, thang, nam, soTap;
    friend istream &operator >> (istream &is, Phim &a)
    {
        a.code = "P";
        if(j < 10) a.code += "00" + to_string(j);
        else if(j < 100) a.code += "0" + to_string(j);
        else a.code += to_string(j);
        string s1, s2;
        getline(is, a.ma);
        a.tl = myMap[a.ma];
        getline(is, a.date);
        getline(is, a.name);
        getline(is, a.tap);
        stringstream ss2(a.date);
        getline(ss2, s2, '/');
        a.ngay = cv(s2);
        getline(ss2, s2, '/');
        a.thang = cv(s2);
        getline(ss2, s2, '/');
        a.nam = cv(s2);
        a.soTap = cv(a.tap);
        ++j;
        return is;
    }
    friend ostream &operator << (ostream &os, Phim &a)
    {
        cout << a.code << ' ' << a.tl << ' ' << a.date << ' ' << a.name << ' ' << a.tap << endl;
        return os;
    }
};
bool cmp(Phim &a, Phim &b)
{
    if(a.nam > b.nam) return 0;
    if(a.nam < b.nam) return 1;
    if(a.thang > b.thang) return 0;
    if(a.thang < b.thang) return 1;
    if(a.ngay > b.ngay) return 0;
    if(a.ngay < b.ngay) return 1;
    if(a.name > b.name) return 0;
    if(a.name < b.name) return 1;
    if(a.soTap < b.soTap) return 0;
    if(a.soTap > b.soTap) return 1;
    return 0;
}
int main()
{
    int n, m;
    cin >> n >> m;
    cin.ignore();
    TheLoai tl[100];
    Phim p[1000];
    for (int i = 0; i < n; i++) cin >> tl[i];
    for (int i = 0; i < m; i++) cin >> p[i];
    sort(a, a + m, cmp);
    for (int i = 0; i < m; i++) cout << p[i];
}