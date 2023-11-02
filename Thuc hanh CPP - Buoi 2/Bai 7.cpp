#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
void solve(){
	string s; 
	getline(cin, s);
	int len = 0;
	stringstream ss(s);
	while (ss>>s){
		if (len+s.size()<=100){
			cout << s << ' ';
			len += s.size()+1;
		} else break;
	}
}
int main() {
    faster();
    int t; 
	cin >> t;
	cin.ignore();
    while (t--){
    	solve();
    	cout << endl;
	}
    return 0;
}