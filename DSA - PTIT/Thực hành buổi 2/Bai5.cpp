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
	queue<string> q;
	vector<int> a = {2, 3, 5, 7};
	do{
		int x = 0;
		for (int i:a){
			x = x*10 + i;
		}
		if (x%2!=0){
			q.push(to_string(x));
		}
	} while (next_permutation(a.begin(), a.end()));

	while (!q.empty()){
		string s = q.front(); q.pop();
		if (s.back() != '2') cout << s << endl;
		if (s.length() == n) break;
		q.push(s + '2');
		q.push(s + '3');
		q.push(s + '5');
		q.push(s + '7');	
	}
	while (!q.empty()){
		if (q.front().back() != '2'){
			cout << q.front() << endl;
		}
		q.pop();
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