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


void solve(){
	/*hav fun with coding*/
	int n; cin >> n;
	deque<int> q;
	string s;
	int x;
	while (n--){
		cin >> s;
		if (s == "PUSHBACK"){
			cin >> x;
			q.push_back(x);
		} else if (s == "PUSHFRONT"){
			cin >> x;
			q.push_front(x);
		} else if (s == "POPBACK"){
			if (!q.empty()){
				q.pop_back();
			}
		} else if (s == "POPFRONT"){
			if (!q.empty()){
				q.pop_front();
			}
		} else if (s == "PRINTBACK"){
			if (!q.empty()){
				cout << q.back();
			} else cout << "NONE";
			cout << endl;
		} else if (s == "PRINTFRONT"){
			if (!q.empty()){
				cout << q.front();
			} else cout << "NONE";
			cout << endl;
		}
	}
}
main(){
	faster();
	int T = 1;
	// cin >> T;
	while (T--){
		solve();
		cout << endl;
	}
	return 0;
}