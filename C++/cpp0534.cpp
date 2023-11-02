#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define pb push_back
using namespace std;
bool palin(string s){
	if (s.length() == 1) return false;
	for (int i = 0; i<=s.length()/2; i++){
		if (s[i]!=s[s.length()-i-1])
			return false;
	}
	return true;
}
bool cmp(pair<string, int> a, pair<string, int> b)
{
    if (a.first.length() > b.first.length()) return 1;
    if (a.first.length() == b.first.length()) {
        if (a.first > b.first) return 1;
    }
    return 0;
}
main(){
	string s;
	map<string, int>m;
	while (cin >> s){
		if (palin(s)){
			m[s]++;
		}
	}
	vector<pair<string, int>> v;
	for (auto x:m){
		v.pb(make_pair(x.first, x.second));
	}
	sort(v.begin(), v.end(), cmp);
	for (auto x:v){
		cout << x.first << ' ' << x.second << endl;
	}
}