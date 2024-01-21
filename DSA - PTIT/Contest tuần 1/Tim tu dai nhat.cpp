#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define pi pair<int, int>
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
bool cmp(pair<string, int> a, pair<string, int> b){
	if (a.first.size() == b.first.size()) return a.second > b.second;
	return a.first.size() < b.first.size();
}
main(){
	vector<pair<string, int>> v;
	string t;
	int i=0;
	while (cin >> t){
		string s;
		stringstream ss(t);
		while (ss >> s){
			v.pb({s, i++});
		}
	}
	sort(v.begin(), v.end(), cmp);
	cout << v[v.size()-1].first << " - " << v[v.size()-1].first.size();
}