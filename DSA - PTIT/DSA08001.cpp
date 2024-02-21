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
	queue<int> q;
	int x, y;
	for (int i=0; i<n; i++){
		cin >> x;
		if (x == 1){
			cout << q.size() << endl;
		} else if (x == 2){
			if (q.empty()){
				cout << "YES" << endl;
			} else cout << "NO" << endl;
		} else if (x == 3){
			cin >> y;
			q.push(y);
		} else if (x == 4){
			if (!q.empty()){
				q.pop();
			}
		} else if (x == 5){
			if (!q.empty()){
				cout << q.front() << endl;
			} else cout << -1 << endl;
		} else if (x == 6){
			if (!q.empty()){
				cout << q.back() << endl;
			} else cout << -1 << endl;
		}
	}
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