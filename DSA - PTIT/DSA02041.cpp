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
	queue<pii> q;
	q.push({n, 0});
	while (true){
		pii p = q.front(); q.pop();
		if (p.fi == 1){
			cout << p.sc;
			return;
		}
		if (p.fi%3 == 0){
			q.push({p.fi/3, p.sc+1});
		}
		if (p.fi%2==0){
			q.push({p.fi/2, p.sc+1});
		}
		q.push({p.fi-1, p.sc+1});
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