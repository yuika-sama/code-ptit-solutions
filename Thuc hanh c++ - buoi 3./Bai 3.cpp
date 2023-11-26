#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
struct human{
	string first, last, phone, date;
};
bool cmp(human a, human b){
	if (a.last > b.last) return 0;
	if (a.last < b.last) return 1;
	if (a.first > b.first) return 0;
	if (a.first > b.first) return 1;
	return 0;
}
int main()
{
    faster();
    fstream fi, fo;
    fi.open("SOTAY.txt", ios::in);
    fo.open("DIENTHOAI.txt", ios::out);
    string s;
    unordered_map<int, string> m;
    human a[10005];
    int index = 0;
    int i = 0;
    string date;
    while(getline(fi, s))
    {
        string tmp = s.substr(0, 4);
        if(tmp == "Ngay")
        {
            ++i;
            date = s.substr(5, s.size() - 5);
            m[i] = date;
        }
        else
        {
            string tmp;
            getline(fi, tmp);
            vector<string> v;
            string name = "";
            string s1;
            stringstream ss(s);
            while(ss >> s1) v.pb(s1);
            a[index].last = v[v.size() - 1];
            for(int i = 0; i < v.size() - 1; ++i) name += v[i] + " ";
            a[index].first = name;
            a[index].phone = tmp;
            a[index].date = m[i];
            index++;
        }
    }
    sort(a, a + index, cmp);
    for(int i = 0; i < index; ++i) 
		fo << a[i].first << a[i].last << ": " << a[i].phone << ' ' << a[i].date << endl;
    return 0;
}