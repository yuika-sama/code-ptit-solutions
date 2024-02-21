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
// cond of problem:
// 1: Euler path
// 0: No Euler path

// Solving 
// Euler path: do thi co huong G ton tai chu trinh Euler neu:
// - Moi (x)ban bac vao == (x)ban bac ra
// - Tat ca cac dinh deu thuoc cung 1cc, khong co dinh nao co deg == 0
// Euler cycle: kinda hard shit
int V, E, u, v;
vector<pair<int, int>> G;

void solve(){
	/*hav fun with coding*/
	cin >> V >> E;
    G.clear(); G.resize(V + 1);
    while (E--) {
        cin >> u >> v;
        G[u].first++;
        G[v].second++;
    }
    for (int i = 1; i <= V; ++i) {
        if (G[i].first != G[i].second) {
            cout << 0;
            return;
        }
    }
    cout << 1;
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