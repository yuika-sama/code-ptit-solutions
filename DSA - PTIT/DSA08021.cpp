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
#define se second
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
int m, n, a[1005][1005];
inline int BFS(){
	int vs[1005][1005] = {};
	queue<pair<int, int>> q;
	pair<int, int> p;
	q.push({1, 1});
	vs[1][1] = 0;
	while (q.size() > 0){
		p = q.front(); q.pop();
		if (p.fi + a[p.fi][p.se] <= n and !vs[p.fi + a[p.fi][p.se]][p.se]){
			if(p.fi + a[p.fi][p.se] == n and p.se == m){
				return vs[p.fi][p.se] + 1;
			}
			vs[p.fi + a[p.fi][p.se]][p.se] = vs[p.fi][p.se] + 1;
			q.push({p.fi + a[p.fi][p.se], p.se});
		}
		if (p.se + a[p.fi][p.se] <= m and !vs[p.fi][p.se  + a[p.fi][p.se]]){
			if(p.se + a[p.fi][p.se] == m and p.fi == n){
				return vs[p.fi][p.se] + 1;
			}
			vs[p.fi][p.se  + a[p.fi][p.se]] = vs[p.fi][p.se] + 1;
			q.push({p.fi, p.se + a[p.fi][p.se]});
		}
	}
	return -1;
}


void solve(){
	/*hav fun with coding*/
	cin >> n >> m;
	for (int i=1; i<=n; i++){
		for (int j=1; j<=m; j++){
			cin >> a[i][j];
		}
	}
	cout << BFS();
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