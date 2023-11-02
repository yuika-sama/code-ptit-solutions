#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
bool check(string &s)
{
    int i = 0;
    string fi = "", se = "";
    for(; i < s.size(); ++i)
    {
        if(isblank(s[i])) return 0;
        if(s[i] == '@') break;
        if(!isalnum(s[i]) && s[i] != '.' && s[i] != '_') return 0;
        fi += s[i];
        if(fi.size() > 64) return 0;
    }
    if(!fi.size()) return 0;
    ++i;
    int checkDots = 0;
    for(; i < s.size(); ++i)
    {
        if(isblank(s[i])) return 0;
        if(!isalnum(s[i]) && s[i] != '.' && s[i] != '_') return 0;
        if(s[i] == '.') checkDots++;
        se += s[i];
        if(se.size() > 254) return 0;
    }
    if(checkDots == 1 && se.size() && se[se.size() - 1] == '.') return 0;
    return se.size() && checkDots;
}
main(){
	faster();
	int t; cin >> t;
	cin.ignore();
	while (t--){
		string s;
		getline(cin, s);
		if (check(s)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}