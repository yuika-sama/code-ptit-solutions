#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O2")
#pragma GCC target("avx,avx2,fma")
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define fi first
#define sc second
#define pb push_back
#define eb emplace_back
#define ins insert
#define sz size()
#define len length
#define mp make_pair
#define sp << ' ' <<
#define endl '\n'
#define precision(x) setprecision(x) << fixed
#define keocon {cout << "I used to be your Tinkle Bell, we are too old for fairytales, my love."}


//end of template
int calclate(int x, int y, char c){
	if (c == '+') return x+y;
	if (c == '-') return x-y;
	if (c == '*') return x*y;
	return x/y;
}

void solve(){
	/*hav fun with coding*/
	int n; cin >> n;
	cin.ignore();
	string s;
	getline(cin, s);
	queue<int> q;
	for (int i = s.size()-1; i>=0; i--){
		if (s[i] == ' ') continue;
		if (isdigit(s[i])){
			string tmp = "";
			while (isdigit(s[i])){
				tmp = s[i--] + tmp;
			}
			i++;
			q.push(stoi(tmp));
		} else {
			int x = q.front(); q.pop();
			int y = q.front(); q.pop();
			q.push(calclate(y, x, s[i]));
		}
	}
	cout << q.front();
}
main(){
	faster();
	int T = 1;
	cin >> T;
	while (T--){
		solve();
		cout << endl;
	}
	return 0;
}