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
string Find(int n){
	queue<string> q;
	q.push("1");
	while (q.size() > 0){
		string x = q.front(); q.pop();
		ll tmp = 0;
		for (int i=0; i<x.size(); i++){
			tmp = 10*tmp + (int)(x[i] - '0');
			tmp%=n;
		}
		if (tmp == 0){
			return x;
		}
		q.push(x + "0");
		q.push(x + "1");
	}
}

void solve(){
	/*hav fun with coding*/
	int n; cin >> n;
	cout << Find(n);
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